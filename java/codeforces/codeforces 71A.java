import java.util.Scanner;

class codeforces_71A{
    public static void main (String[] args){
        Scanner key=new Scanner(System.in);
        int t=key.nextInt();
        String[] s=new String[t];
        for(int i=0; i<t; ++i){
            s[i]=key.next();
            char[] a=s[i].toCharArray();
            int sizeOfChar=a.length;
            if(sizeOfChar>=10){
                s[i]=a[0]+Integer.toString(sizeOfChar-2)+a[a.length-1];
            }
            else{
                //do nothing
            }
        }
        
        for(int j=0; j<t; ++j){
            System.out.println(s[j]);
        }
    }
}