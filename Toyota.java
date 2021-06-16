
public class Toyota extends Mobil{//subclass dari Mobil
	public void mobil() {
		System.out.println("Mobil 2");
	}
	public void jenis(){
		System.out.println(name+" Alpart");
				
	}
	protected void beban() {
		System.out.println("800 kg");
	}
	public static void main(String[] args) {
		Mobil produk= new Mobil();
		produk.namaToko();
		produk.mobil();
		produk.jenis();
		produk.setharga(6000000);
		System.out.println("Rp "+produk.getharga());
		produk.beban();
		
		Toyota merk= new Toyota();
		merk.namaToko();
		merk.mobil();
		merk.jenis();
		merk.setharga(30000000);
		System.out.println("Rp "+merk.getharga());
		merk.beban();
	}
	
}
