package practise_java;
import java.util.*;
public class substitution_cipher {
	static String alphabets= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	static String key="QWERTYUIOPASDFGHJKLZXCVBNM";
	public static String encrypt(String message)
	{
		String result="";
		for(int i=0;i<message.length();i++)
		{
			char ch=message.charAt(i);
			//encrypt the upper-case letters
			if(ch>='A' && ch<='Z')
			{
				int index=ch-'A';
				result=result+key.charAt(index);
			}
			//encrypt the lower-case letters
			else if(ch>='a' && ch<='z')
			{
				int index=ch-'a';
				result=result+Character.toLowerCase(key.charAt(index));
			}
			//non-aphabetic characters remain same
			else 
			{
				result=result+ch;
			}
		}
		return result;
	}
	public static String decrypt(String message)
	{
		String result="";
		for(int i=0;i<message.length();i++)
		{
			char ch=message.charAt(i);
			//decrypt the upper-case letters
			if(ch>='A' && ch<='Z')
			{
				int index=key.indexOf(ch);
				result=result+alphabets.charAt(index);
			}
			//decrypt the lower-case letters
			else if(ch>='a' && ch<='z')
			{
				int index=key.indexOf(Character.toUpperCase(ch));
				result=result+Character.toLowerCase(alphabets.charAt(index));
			}
			//non-aphabetic characters remain same
			else 
			{
				result=result+ch;
			}
		}
		return result;
	}
	public static void main(String[] args)
	{
		Scanner sin=new Scanner(System.in);
		System.out.println("Enter the String: \n");
		String p=sin.nextLine();
		String encrypted=encrypt(p);
		System.out.println("Encrypted Message : \t "+encrypted);
		String decrypted=decrypt(encrypted);
		System.out.println("Decrypted Message: \t"+ decrypted);	
	}	
}

