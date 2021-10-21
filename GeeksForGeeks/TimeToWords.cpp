string data[30] = { "zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine","ten", "eleven", "twelve", "thirteen","fourteen", "fifteen", "sixteen", "seventeen","eighteen", "nineteen", "twenty", "twenty one","twenty two", "twenty three", "twenty four","twenty five", "twenty six", "twenty seven","twenty eight", "twenty nine"};
    string timeToWord(int H, int M){
        if(M == 0){
            return data[H] + " o' clock";
        } else 
        {
            if(M > 30) {H++; if(H == 13) H = 1;}
            if(M == 15) return "quarter past " + data[H];
            if(M == 45) return "quarter to " + data[H];
            if(M == 30) return "half past " + data[H];
            if(M == 1) return "one minute past " + data[H];
            if(M == 59) return "one minute to " + data[H];
            if(M < 30){
                return data[M] + " minutes past " + data[H];
            } else {
                return data[60-M] + " minutes to " + data[H];
            }
        }
    }