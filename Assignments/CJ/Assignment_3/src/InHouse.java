package Hospital;

public class InHouse extends Patient{

	private double discount = 0;
	private double amount = 0;

	public InHouse(int id,int type, int days, double disc ){
		super(id ,type,days);
			discount = disc;
	}
        public double getDiscount(){
		return discount;
	}
	public void setDiscount(double di){
		discount = di;
	}
	public double getBillAmount(){
		amount = super.getBillAmount();
		return amount = amount*(1- discount);
	}
}
