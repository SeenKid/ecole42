var rpc = require("discord-rpc")
const client = new rpc.Client({ 
	transport: 'ipc' 
})
client.on('ready', () => {
client.request('SET_ACTIVITY', {
pid: process.pid,
activity : {
details : "🌹 FrenchRobloxCommunity 🌹",
state: "🌴✨ Rejoins nous ✨🌴",
assets : {
large_image : "frc",
large_text : "🌹 FrenchRobloxCommunity 🌹"
},
buttons : [{label : "Rejoins nous ! ❤️" , url : "https://discord.gg/YH8Qbjr2sJ"},{label : "Vote pour nous 💎", url : "https://serveur-prive.net/discord/french-roblox-community-3293"}]
}
})
})
client.login({ 
	clientId : "820236976439164949" 
}).catch(console.error);

// this is not working anymore on discord. 
