﻿using BotDiscord.Env;
using DSharpPlus.Entities;

namespace BotDiscord.Roles
{
    public class TalkativeSeer : Seer
    {
        public TalkativeSeer(DiscordMember me, DiscordGuildEmoji emoji) : base(me, emoji)
        {
        }

        public override string ToString()
        {
            return Global.Game.Texts.GameRoles.SeerToString + " \n " +
                   Global.Game.Texts.GameRoles.TalkativeSeerToString + " \n " +
                   Global.Game.Texts.GameRoles.TownFriendly;
        }

        public override string GotKilled()
        {
            return $"{Global.Game.Texts.GameRoles.TalkativeSeerName}";
        }

        public override string GetClassName()
        {
            return Global.Game.Texts.GameRoles.TalkativeSeerName;
        }
    }
}