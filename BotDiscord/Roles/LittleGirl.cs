using System.Threading.Tasks;
using BotDiscord.Env;
using DSharpPlus.Entities;

namespace BotDiscord.Roles
{
    public class LittleGirl : Citizen
    {
        public LittleGirl(DiscordMember me, DiscordGuildEmoji emoji) : base(me, emoji)
        {
        }


        public override string ToString()
        {
            return Global.Game.Texts.GameRoles.LittleGirlToString + " \n " + Global.Game.Texts.GameRoles.TownFriendly;
        }

        public override string GotKilled()
        {
            return $"{Global.Game.Texts.GameRoles.LittleGirlName}";
        }

        public override string GetClassName()
        {
            return Global.Game.Texts.GameRoles.LittleGirlName;
        }

        public static Task LittleGirlAction()
        {
            //throw new NotImplementedException();
            return Task.CompletedTask;
        }
    }
}