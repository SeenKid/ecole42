package obzeyhaxx.module;

public class Module {
	protected String name;
	protected int bind;
	protected Cat category;
	protected boolean isToggled;
	
	public Module(String name, int bind, Cat category) {
		this.name = name;
		this.bind = bind;
		this.category = category;
	}


	public boolean isToggled() {
		return isToggled;
	}


	public void setToggled(boolean s) {
		onToggle();
		if (s) {
			onEnabled();
			this.isToggled=true;
		} else {
			onDisabled();
			this.isToggled=false;
		}
	}
	
	public void toggleModule(){
		setToggled(!isToggled());
	}


	public String getName() {
		return name;
	}


	public void setName(String name) {
		this.name = name;
	}


	public int getBind() {
		return bind;
	}


	public void setBind(int bind) {
		this.bind = bind;
	}


	public Cat getCategory() {
		return category;
	}


	public void setCategory(Cat category) {
		this.category = category;
	}
	
	public void onToggle() {}
	public void onEnabled() {}
	public void onDisabled() {}
	public void onUpdate() {}
	public void onRender() {}

}











	
	/*
	public class Jeronimo {
		while True:
			pinertamams()
	}
	*/



