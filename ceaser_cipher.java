package practise_java;

import java.util.*;

public class ceaser_cipher {
	public static String encrypt(String p,int k)
	{
		String result="";
		k=k%26;
		for(int i=0;i<p.length();i++)
		{
			char ch=p.charAt(i);
			if(ch>='A' && ch<='Z')
			{
				char encryptedtext=(char)((ch-'A'+k)%26+'A');
				result=result+encryptedtext;
			}
			else if(ch>='a' && ch<='z')
			{
				char encryptedtext=(char)((ch-'a'+k)%26+'a');	
				result=result+encryptedtext;
			}
			else
			{
				result=result+ch;
			}
			
		}
		return result;
	}
	public static String decrypt(String p,int k)
	{
		String result="";
		k=k%26;
		for(int i=0;i<p.length();i++)
		{
			char ch=p.charAt(i);
			if(ch>='A' && ch<='Z')
			{
				char decryptedtext=(char)((ch-'A'-k+26)%26+'A');
				result=result+decryptedtext;
			}
			else if(ch>='a' && ch<='z')
			{
				char decryptedtext=(char)((ch-'a'-k+26)%26+'a');	
				result=result+decryptedtext;
			}
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
		System.out.println("Enter the key :\n");
		int k=sin.nextInt();
		String encrypted=encrypt(p,k);
		System.out.println("Encrypted Message : \t "+encrypted);
		String decrypted=decrypt(encrypted,k);
		System.out.println("Decrypted Message: \t"+ decrypted);				
	}
}
