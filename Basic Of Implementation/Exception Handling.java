import java.util.Scanner;
import java.lang.Exception;
class ExceptionHandling{
	static void solve(int arr[]) throws Exception
	{
		int ans=0;
		for (int i = 0; i < 10; ++i)
			for (int j = i+1; j < 10; ++j)
				ans += arr[i]/arr[j];
		throw new MyException(ans);
	}
	public static void main(String args)
	{
		try{
			Scanner in = new Scanner(System.in);
			int n = in.nextInt();
			int []arr = new int[n];
			in.nextLine();
			for (int i = 0; i < 10; ++i)
				arr[i] = Integer.parseInt(in.nextLine());
			String s = in.nextLine();
			System.out.println(s.CharAt(10));
			solve(arr);
		}
	}
}
