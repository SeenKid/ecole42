const Discord = require('discord.js')
const client = new Discord.Client()
const fs = require('fs')
let prefix = "&"

client.login("")

client.on("ready", async () => {
    setInterval(changing_status, 5000);
    var s = client.guilds.size
            function changing_status() {
              let status = ["sur " + s + " serveurs","Sbots Market","&help"]
              let random = status[Math.floor(Math.random() * status.length)]
              client.user.setActivity(random)
        }

client.on('guildMemberAdd', member => {
    let embed = new Discord.RichEmbed()
        .setDescription(':tada: **' + member.user.username + '** a rejoint ' + member.guild.name)
        .setFooter('Nous sommes désormais ' + member.guild.memberCount) 
        .setColor("GREEN")
        let join = member.guild.channels.find(ch => ch.name === "sbot-fr")
        if(!join) return;

        join.send(embed)
      })

client.on('guildMemberRemove', member => {
    let embed = new Discord.RichEmbed()
        .setDescription(':cry: **' + member.user.username + '** a quitté ' + member.guild.name)
        .setFooter('Nous sommes désormais ' + member.guild.memberCount)
        .setColor("RED");
  
  let join = member.guild.channels.find(ch => ch.name === "sbot-fr")
  if(!join) return;

  join.send(embed)
})

/*Kick*/
client.on('message', function (message) {
    if (!message.guild) return
    let args = message.content.trim().split(/ +/g)
 
    if (args[0].toLowerCase() === prefix + 'kick') {
       if (!message.member.hasPermission('KICK_MEMBERS')) return message.channel.send("Vous n'avez pas la permission d'utiliser cette commande ;(")
       let member = message.mentions.members.first()
       if (!member) return message.channel.send("Veuillez mentionner un utilisateur :x:")
       if (member.highestRole.calculatedPosition >= message.member.highestRole.calculatedPosition && message.author.id !== message.guild.owner.id) return message.channel.send("Vous ne pouvez pas kick cet utilisateur :x:")
       if (!member.kickable) return message.channel.send("Je ne peux pas exclure cet utilisateur :sunglass:")
       member.kick()
       message.channel.send('**' + member.user.username + '** a été exclu :white_check_mark:')
    }
})

/*Ban*/
client.on('message', function (message) {
    if (!message.guild) return
    let args = message.content.trim().split(/ +/g)
 
    if (args[0].toLocaleLowerCase() === prefix + 'ban') {
       if (!message.member.hasPermission('BAN_MEMBERS')) return message.channel.send("Vous n'avez pas la permission d'utiliser cette commande ;(")
       let member = message.mentions.members.first()
       if (!member) return message.channel.send("Veuillez mentionner un utilisateur :x:")
       if (member.highestRole.calculatedPosition >= message.member.highestRole.calculatedPosition && message.author.id !== message.guild.owner.id) return message.channel.send("Vous ne pouvez pas bannir cet utilisateur :x:")
       if (!member.bannable) return message.channel.send("Je ne peux pas bannir cet utilisateur :sunglass:")
       message.guild.ban(member, {days: 7})
       message.channel.send('**' + member.user.username + '** a été banni :white_check_mark:')
    }
})
client.on('message', function (message) {
    if (!message.guild) return
    let args = message.content.trim().split(/ +/g)
 
    if (args[0].toLowerCase() === prefix + "clear") {
        if (!message.member.hasPermission('MANAGE_MESSAGES')) return message.channel.send("Vous n'avez pas la permission d'utiliser cette commande")
        let count = args[1]
        if (!count) return message.channel.send("Veuillez indiquer un nombre de messages à supprimer")
        if (isNaN(count)) return message.channel.send("Veuillez indiquer un nombre valide")
        if (count < 1 || count > 100) return message.channel.send("Veuillez indiquer un nombre entre 1 et 100")
        message.channel.bulkDelete(parseInt(count) + 1)
    }

    if (args[0].toLowerCase() === prefix + "mute") {
        if (!message.member.hasPermission('MANAGE_MESSAGES')) return message.channel.send("Vous n'avez pas la permission d'utiliser cette commande")
        let member = message.mentions.members.first()
        if (!member) return message.channel.send("Membre introuvable")
        if (member.highestRole.calculatedPosition >= message.member.highestRole.calculatedPosition && message.author.id !== message.guild.ownerID) return message.channel.send("Vous ne pouvez pas mute ce membre")
        if (member.highestRole.calculatedPosition >= message.guild.me.highestRole.calculatedPosition || member.id === message.guild.ownerID) return message.channel.send("Je ne peux pas mute ce membre")
        let muterole = message.guild.roles.find(role => role.name === 'Muted')
        if (muterole) {
            member.addRole(muterole)
            message.channel.send(member + ' a été mute :white_check_mark:')
        }
        else {
            message.guild.createRole({name: 'Muted', permissions: 0}).then(function (role) {
                message.guild.channels.filter(channel => channel.type === 'text').forEach(function (channel) {
                    channel.overwritePermissions(role, {
                        SEND_MESSAGES: false
                    })
                })
                member.addRole(role)
                message.channel.send(member + ' a été mute :white_check_mark:')
            })
        }
    }
})})
client.on('message', message => {
if (message.content === prefix + "help") {
                var creator_embed = new Discord.RichEmbed()
                    .setTitle("° Page d'aide °")
                    .setDescription("Page d'aide")
                    .addField("Commandes","&cmd")
                    .addField("IMPORTANT : créez un salon", "sbot-fr")
                    .setColor("BLUE")
                    .addField("*Robot par YannouW*","**Merci Yuki** - Sbots")
                    message.channel.send({embed: creator_embed});
}
})
client.on('message', message => {
if (message.content === prefix + "cmd") {
                var creator_embed = new Discord.RichEmbed()
                    .setTitle("° Page des commandes °")
                    .setDescription("Commandes :")
                    .addField("Commandes","&cmd")
					.addField("Aide","&help")
                    .addField("IMPORTANT : créez un salon", "sbot-fr")
                    .setColor("ORANGE")
                    .addField("*Robot par YannouW*","**Merci Yuki** - Sbots")
                    message.channel.send({embed: creator_embed});
}
})