
public class Mobil {
	//class parent
	
	int harga;
	
	String name="Toyota";//default

	void namaToko() {//default atau tanpa modifier
	
		System.out.println("SRIKANDI MTR");
	}
	public void mobil() {
		System.out.println("Mobil 1");
	}
	
	public void setharga(int harga){
		this.harga=harga;
	}
	
	public int getharga() {
		return harga;
	}

	public void jenis(){
		System.out.println(name+" Pajero");
	}
	protected void beban() {
		System.out.println("360 kg");
	}
	
}
