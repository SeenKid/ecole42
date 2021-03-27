package obzeyhaxx.module.modules;

import org.lwjgl.input.Keyboard;

import net.minecraft.client.Minecraft;
import net.minecraft.network.play.client.C03PacketPlayer;
import obzeyhaxx.module.Cat;
import obzeyhaxx.module.Module;
import obzeyhaxx.utils.Utils;

public class NoFall extends Module {
	
	Minecraft mc = Minecraft.getMinecraft();

	public NoFall() {
		super("NoFall", Keyboard.KEY_N, Cat.PLAYER);
	}

	public void onEnabled() {
		Utils.addChat("§2[§cObzeyHaxx§2]§a NoFall activé.");
		super.onEnabled();
	}
	
	public void onDisabled() {
		Utils.addChat("§2[§cObzeyHaxx§2]§4 NoFall désactivé.");
		super.onDisabled();
	}
	
	public void onUpdate() {
		if (!this.isToggled) {
			return;
		}
		if (mc.thePlayer.fallDistance>=2) {
			mc.thePlayer.sendQueue.addToSendQueue(new C03PacketPlayer(true));
			mc.thePlayer.fallDistance=0.0F;
		}
	}
	
}
