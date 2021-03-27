package obzeyhaxx.module;

import java.util.ArrayList;

import obzeyhaxx.module.modules.*;

public class ModuleManager {
	public ArrayList<Module> ActiveModule = new ArrayList<Module>();
	
	public ModuleManager() {
		this.ActiveModule.add(new NoFall()); // KEY N
	}
	

}
