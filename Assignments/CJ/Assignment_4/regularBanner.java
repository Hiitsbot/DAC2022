package banner;

public class regularBanner{

	private double width;
	private double height;
   	
        public regularBanner(double w,double h){
		width=w;
		height=h;
	}

   	public regularBanner(){
		this(20.10,5.20);
	}

	public boolean Resize(double w,double h){
		if(w >= h){
		   width=w;
		   height=h;
		   return true;
		}
		return false;
	}


	public void Resize(float s){
		Resize(s,s);
	}

	public double Area(){
		return width * height;
	}

}
