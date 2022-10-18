package banner;

public class curvedBanner extends regularBanner{
	private double radius;
	 
	 
	public curvedBanner(double w,double h,double r){
		super(w,h);
		radius=r;
	}

	public double Area(){
		return super.Area()-0.86*radius*radius;
	}
}
