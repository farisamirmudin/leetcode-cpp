class Solution {
public:
    int romanToInt(string s) {
        char symbol[] = {'I','V','X','L','C','D','M'};
        int output = 0;
        int previous = 0;
        int len_s = std::size(s);
        for(int i = len_s-1; i >= 0; i--){
            switch (s[i]) {
                case 'I':
                    if (1 >= previous){
                        output += 1;
                    }else{
                      output -= 1;  
                    }
                    previous = 1;
                    break;
                case 'V':
                    output += 5;
                    previous = 5;
                    break;
                case 'X':
                    if (10 >= previous){
                        output += 10;
                    }else{
                      output -= 10;  
                    }
                    previous = 10;
                    break;
                case 'L':
                    output += 50;
                    previous = 50;
                    break;
                case 'C':
                    if (100 >= previous){
                        output += 100;
                    }else{
                      output -= 100;  
                    }
                    previous = 100;
                    break;
                case 'D':
                    output += 500;
                    previous = 500;
                    break;
                case 'M':
                    output += 1000;
                    previous = 1000;
                    break;
                default:
                    break;
            }
        }
        
        return output;
    }
};