﻿using GameManager.Env.Extentions;
using DSharpPlus;
using DSharpPlus.Entities;
using GameManager.Env;
using GameManager.Env.Enum;

namespace GameManager.Roles
{
    public abstract class Personnage
    {
        public DiscordMember Me => Global.Game.Guild.GetMemberAsync(Id).GetAwaiter().GetResult();

        public bool Alive { get; set; }
        public Effect Effect = Effect.None;

        public ulong Id;

        public DiscordChannel ChannelT { get; set; }
        public DiscordChannel ChannelV { get; set; }

        public DiscordGuildEmoji Emoji;

        protected Personnage(DiscordMember me, DiscordGuildEmoji emoji)
        {
            Id = me.Id;
            Emoji = emoji;
            Alive = true;

            ChannelV = Global.Game.Guild.CreateChannelAsync(Me.Username.RemoveSpecialChars(), ChannelType.Voice,
                Global.Game.DiscordChannels[GameChannel.PersoGroup]).GetAwaiter().GetResult();

            ChannelT = Global.Game.Guild.CreateChannelAsync(Me.Username.RemoveSpecialChars(), ChannelType.Text,
                Global.Game.DiscordChannels[GameChannel.PersoGroup]).GetAwaiter().GetResult();


            ChannelT.AddOverwriteAsync(Me, GameBuilder.UsrPerms);
            ChannelV.AddOverwriteAsync(Me, GameBuilder.UsrPerms);

            Global.Game.DiscordChannels[GameChannel.TownText].AddOverwriteAsync(Me, GameBuilder.UsrPerms);
            Global.Game.DiscordChannels[GameChannel.TownVoice].AddOverwriteAsync(Me, GameBuilder.UsrPerms);
            var embed = new DiscordEmbedBuilder
            {
                Title = Global.Game.Texts.GameRoles.RoleString,
                Color = Color.InfoColor
            };
            embed.AddField("Role", ToString());
            ChannelT.SendMessageAsync(embed: embed.Build()).GetAwaiter().GetResult();
            me.PlaceInAsync(ChannelV);
        }


        public virtual string GotKilled()
        {
            return $"{Me.DisplayName} {Global.Game.Texts.Annoucement.DeadMessagePublic}";
        }

        public abstract string GetClassName();
    }

   
}