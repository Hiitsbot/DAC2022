import banner.regularBanner;
import banner.curvedBanner;

class BannerProgram{
        
       public static double bannerPrice(regularBanner reg,int copies){
	       double rate =copies<5?0.8:0.75;
	       return copies*rate*reg.Area();

       }


	public static void main(String[] args){
		double a=Double.parseDouble(args[0]);
		double b=Double.parseDouble(args[1]);
		double c=Double.parseDouble(args[2]);
	        int d=Integer.parseInt(args[3]);
		regularBanner regular=new regularBanner(a,b);

		curvedBanner curved=new curvedBanner(a,b,c);
         System.out.printf("Price Of Regular Banner: %.2f%n",bannerPrice(regular,d));
	 System.out.printf("Price Of Curved Banner: %.2f%n",bannerPrice(curved,d));
	}

}


