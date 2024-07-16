import java.util.*;

public class Codeforces_723B{
    public static void main (String[] args){
        Scanner key=new Scanner(System.in);
        int t=key.nextInt();
        char s;
        int maxLength=0;
        int wordsInBracket=0;
        int countLetters=0;
        
        for(int i=0; i<t; ++i){
            s=key.next().charAt(0);
            if(s!='_' && s!='(' && i!=t-1){
                countLetters++;
            }
            else if(s=='_' || s=='(' || i==t-1){
                if(i==t-1 && s!='_'){
                    countLetters++;
                }
                
                if(maxLength<countLetters){
                    maxLength=countLetters;
                }
                
                countLetters=0;
                
                if(s=='('){
                    char prev=s;
                    while(s!=')'){
                        if(s=='_' && prev!='_' && prev!='('){
                            wordsInBracket++;
                        }
                        
                        prev=s;
                        
                        ++i;
                        s=key.next().charAt(0);
                    }
                    if(s==')' && prev!='(' && prev!='_'){
                        wordsInBracket++;
                    }
                }
                
            }
        }
        
        
            
            
        
        System.out.println(maxLength+" "+wordsInBracket);
    }
}
