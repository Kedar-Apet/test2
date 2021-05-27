
public class CharToString {

	public static void charString(char... a)
	{
		String plus = "";
		for(int i =0; i<a.length;i++)
		{
			plus = plus + a[i];
		}
		System.out.println("The merge string is: "+plus);
		
	}
	public static void main(String[] args) {
charString('G','o','v','i','n','d');
	}

}
