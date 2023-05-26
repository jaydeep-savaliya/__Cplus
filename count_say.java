public class count_say{
     static String countAndSay(int n){
        if(n==1) return "1";
        String s = countAndSay(n-1);
        StringBuilder ans = new StringBuilder();
        int count = 0;
        for(int i=0;i<s.length();i++){
            count++;
            if(i==s.length()-1 || s.charAt(i)!=s.charAt(i+1)){
                ans.append(count).append(s.charAt(i));
                count = 0;
            }
        }
        return ans.toString();
    }
    public static void main(String[] args) throws Exception {
        int n = 5;
        String ans = countAndSay(n);
        System.out.print(ans);
    }
}