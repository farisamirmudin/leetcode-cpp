class Solution {
public:
    string intToRoman(int num) {
        int clone_num = num;
        string symbol = "";
        int value[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string sym[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        for (int i = 0; i<std::size(value); i++){
            if (clone_num/value[i] != 0){
                for (int j = 0; j < clone_num/value[i]; j++){
                    symbol += sym[i];
                }
                clone_num %= value[i];
            }
        }
        return symbol;
    }
};