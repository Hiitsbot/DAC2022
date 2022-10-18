package series;

public class calculation{

	public static Sequence linear(){
	var seq1 = new Linear();
	return seq1;
	}

	public static Sequence power(){
		var seq2 = new Power();
		return seq2;
	}
	
	private calculation() {}

}

