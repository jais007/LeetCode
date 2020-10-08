class Solution {
    public boolean isValid(String s) {
        Stack<Character> st = new Stack<>();
        boolean ans=true;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='(' || s.charAt(i)=='{' || s.charAt(i)=='['){
                st.push(s.charAt(i));
            }else{
                if(!st.empty()){
                    switch(s.charAt(i)) {
                          case ')':
                            if(st.peek()=='('){
                                st.pop();
                            }else{
                                ans=false;
                                i=s.length();
                            }
                            break;
                          case ']':
                            if(st.peek()=='['){
                                st.pop();
                            }else{
                                ans=false;
                                i=s.length();
                            }
                            break;
                          case '}':
                            if(st.peek()=='{'){
                                st.pop();
                            }else{
                                ans=false;
                                i=s.length();
                            }
                            break;
                          default:
                            ans=false;
                            i=s.length();
                            break;
                        }
                    
                }else{
                    ans=false;
                    break;
                }
            }
        }
        
        if(!st.empty()){
            ans=false;
        }
        return ans;
    }
}
