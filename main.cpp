//
//  main.cpp
//  NumToWord
//
// The purpose of this program is to take an int value and convert it into a string
// which reads the number in English words.
//
//  Created by Jakob Hammond on 9/20/24.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num;
    string numAsString;
    cout << "Enter an integer (up to 2147483647): ";
    cin >> num;
    string neg = "";
    
    if(num < 0){
        neg = "Negative ";
        num = abs(num);
    }
    
    if(num != 0){
        
        int digit10 = (num / 1000000000) % 10;  //billions place
        int digit9 =  (num / 100000000) % 10;    //hundred millions place
        int digit8 =  (num / 10000000) % 10;     //ten millions place
        int digit7 =  (num / 1000000) % 10;      //millions place
        int digit6 =  (num / 100000) % 10;       //hundred thousands place
        int digit5 =  (num / 10000) % 10;        //ten thousands place
        int digit4 =  (num / 1000) % 10;         //thousands place
        int digit3 =  (num / 100) % 10;          //hundreds place
        int digit2 =  (num / 10) % 10;           //tens place
        int digit1 =   num % 10;                 //ones place
        
        
        //tenth digit (billions place)
        string billionsPlace;
        switch(digit10){
            case 0: billionsPlace = "";                  break;
            case 1: billionsPlace = "One Billion ";      break;
            case 2: billionsPlace = "Two Billion ";      break;
            case 3: billionsPlace = "Three Billion ";    break;
            case 4: billionsPlace = "Four Billion ";     break;
            case 5: billionsPlace = "Five Billion ";     break;
            case 6: billionsPlace = "Six Billion ";      break;
            case 7: billionsPlace = "Seven Billion ";    break;
            case 8: billionsPlace = "Eight Billion ";    break;
            case 9: billionsPlace = "Nine Billion ";     break;
        }
        
        //ninth digit (hundred millions place)
        string hMillionsPlace;
        switch(digit9){
            case 0: hMillionsPlace = "";                  break;
            case 1: hMillionsPlace = "One Hundred ";      break;
            case 2: hMillionsPlace = "Two Hundred ";      break;
            case 3: hMillionsPlace = "Three Hundred ";    break;
            case 4: hMillionsPlace = "Four Hundred ";     break;
            case 5: hMillionsPlace = "Five Hundred ";     break;
            case 6: hMillionsPlace = "Six Hundred ";      break;
            case 7: hMillionsPlace = "Seven Hundred ";    break;
            case 8: hMillionsPlace = "Eight Hundred ";    break;
            case 9: hMillionsPlace = "Nine Hundred ";     break;
        }
        
        //eighth digit (ten millions place)
        string tMillionsPlace;
        switch(digit8){
            case 0: tMillionsPlace = "";         break;
            //case 1 is special
            case 2: tMillionsPlace = "Twenty";   break;
            case 3: tMillionsPlace = "Thirty";   break;
            case 4: tMillionsPlace = "Forty";    break;
            case 5: tMillionsPlace = "Fifty";    break;
            case 6: tMillionsPlace = "Sixty";    break;
            case 7: tMillionsPlace = "Seventy";  break;
            case 8: tMillionsPlace = "Eighty";   break;
            case 9: tMillionsPlace = "Ninety";   break;
            case 1:
                switch(digit7){ //a one in the ten thousands place is a special case
                    case 0: tMillionsPlace = "Ten ";         break;
                    case 1: tMillionsPlace = "Eleven ";      break;
                    case 2: tMillionsPlace = "Twelve ";      break;
                    case 3: tMillionsPlace = "Thirteen ";    break;
                    case 4: tMillionsPlace = "Fourteen ";    break;
                    case 5: tMillionsPlace = "Fifteen ";     break;
                    case 6: tMillionsPlace = "Sixteen ";     break;
                    case 7: tMillionsPlace = "Seventeen ";   break;
                    case 8: tMillionsPlace = "Eighteen ";    break;
                    case 9: tMillionsPlace = "Nineteen ";    break;
                }
        }
        
        //seventh digit (millions place)
        string millionsPlace = "";
            if(digit8 != 1){
                if(digit9 != 0){
                    if(digit8 != 0) millionsPlace = "-";
                    else millionsPlace = " ";
                }
                switch(digit7){
                    case 0: millionsPlace += "";          break;
                    case 1: millionsPlace += "One ";      break;
                    case 2: millionsPlace += "Two ";      break;
                    case 3: millionsPlace += "Three ";    break;
                    case 4: millionsPlace += "Four ";     break;
                    case 5: millionsPlace += "Five ";     break;
                    case 6: millionsPlace += "Six ";      break;
                    case 7: millionsPlace += "Seven ";    break;
                    case 8: millionsPlace += "Eight ";    break;
                    case 9: millionsPlace += "Nine ";     break;
                }
            }
            else millionsPlace = "";
            if(digit7 != 0 || digit8 != 0 || digit9 != 0) millionsPlace += "Million ";
        
        //sixth digit (hundred thousands place)
        string hThousandsPlace;
        switch(digit6){
            case 0: hThousandsPlace = "";                  break;
            case 1: hThousandsPlace = "One Hundred ";      break;
            case 2: hThousandsPlace = "Two Hundred ";      break;
            case 3: hThousandsPlace = "Three Hundred ";    break;
            case 4: hThousandsPlace = "Four Hundred ";     break;
            case 5: hThousandsPlace = "Five Hundred ";     break;
            case 6: hThousandsPlace = "Six Hundred ";      break;
            case 7: hThousandsPlace = "Seven Hundred ";    break;
            case 8: hThousandsPlace = "Eight Hundred ";    break;
            case 9: hThousandsPlace = "Nine Hundred ";     break;
        }
        
        //fifth digit (ten thousands place)
        string tThousandsPlace;
        switch(digit5){
            case 0: tThousandsPlace = "";         break;
            //case 1 is special
            case 2: tThousandsPlace = "Twenty";   break;
            case 3: tThousandsPlace = "Thirty";   break;
            case 4: tThousandsPlace = "Forty";    break;
            case 5: tThousandsPlace = "Fifty";    break;
            case 6: tThousandsPlace = "Sixty";    break;
            case 7: tThousandsPlace = "Seventy";  break;
            case 8: tThousandsPlace = "Eighty";   break;
            case 9: tThousandsPlace = "Ninety";   break;
            case 1:
                switch(digit4){ //a one in the ten thousands place is a special case
                    case 0: tThousandsPlace = "Ten ";         break;
                    case 1: tThousandsPlace = "Eleven ";      break;
                    case 2: tThousandsPlace = "Twelve ";      break;
                    case 3: tThousandsPlace = "Thirteen ";    break;
                    case 4: tThousandsPlace = "Fourteen ";    break;
                    case 5: tThousandsPlace = "Fifteen ";     break;
                    case 6: tThousandsPlace = "Sixteen ";     break;
                    case 7: tThousandsPlace = "Seventeen ";   break;
                    case 8: tThousandsPlace = "Eighteen ";    break;
                    case 9: tThousandsPlace = "Nineteen ";    break;
                }
        }
        
        
        //fourth digit (thousands place)
        string thousandsPlace;
        if(digit5 != 1){
            if(digit5 != 0){
                if(digit4 != 0) thousandsPlace = "-";
                else thousandsPlace = " ";
            }
            switch(digit4){
                case 0: thousandsPlace += "";          break;
                case 1: thousandsPlace += "One ";      break;
                case 2: thousandsPlace += "Two ";      break;
                case 3: thousandsPlace += "Three ";    break;
                case 4: thousandsPlace += "Four ";     break;
                case 5: thousandsPlace += "Five ";     break;
                case 6: thousandsPlace += "Six ";      break;
                case 7: thousandsPlace += "Seven ";    break;
                case 8: thousandsPlace += "Eight ";    break;
                case 9: thousandsPlace += "Nine ";     break;
            }
        }
        else thousandsPlace = "";
        if(digit4 != 0 || digit5 != 0 || digit6 != 0) thousandsPlace += "Thousand ";
        
        //third digit (hundreds place)
        string hundredsPlace;
        switch(digit3){
            case 0: hundredsPlace = "";                  break;
            case 1: hundredsPlace = "One Hundred ";      break;
            case 2: hundredsPlace = "Two Hundred ";      break;
            case 3: hundredsPlace = "Three Hundred ";    break;
            case 4: hundredsPlace = "Four Hundred ";     break;
            case 5: hundredsPlace = "Five Hundred ";     break;
            case 6: hundredsPlace = "Six Hundred ";      break;
            case 7: hundredsPlace = "Seven Hundred ";    break;
            case 8: hundredsPlace = "Eight Hundred ";    break;
            case 9: hundredsPlace = "Nine Hundred ";     break;
        }
        
        //second digit (tens place)
        string tensPlace;
        switch(digit2){
            case 0: tensPlace = "";         break;
            //case 1 is special
            case 2: tensPlace = "Twenty";   break;
            case 3: tensPlace = "Thirty";   break;
            case 4: tensPlace = "Forty";    break;
            case 5: tensPlace = "Fifty";    break;
            case 6: tensPlace = "Sixty";    break;
            case 7: tensPlace = "Seventy";  break;
            case 8: tensPlace = "Eighty";   break;
            case 9: tensPlace = "Ninety";   break;
            case 1:
                switch(digit1){ //a one in the tens place is a special case
                    case 0: tensPlace = "Ten";         break;
                    case 1: tensPlace = "Eleven";      break;
                    case 2: tensPlace = "Twelve";      break;
                    case 3: tensPlace = "Thirteen";    break;
                    case 4: tensPlace = "Fourteen";    break;
                    case 5: tensPlace = "Fifteen";     break;
                    case 6: tensPlace = "Sixteen";     break;
                    case 7: tensPlace = "Seventeen";   break;
                    case 8: tensPlace = "Eighteen";    break;
                    case 9: tensPlace = "Nineteen";    break;
                }
        }
        
        //first digit (ones place)
        string onesPlace;
        
        if(digit2 != 1){
            if(digit2 != 0){
                if(digit1 != 0) onesPlace = "-";
                else onesPlace = " ";
            }
            switch(digit1){
                case 0: onesPlace += "";         break;
                case 1: onesPlace += "One";      break;
                case 2: onesPlace += "Two";      break;
                case 3: onesPlace += "Three";    break;
                case 4: onesPlace += "Four";     break;
                case 5: onesPlace += "Five";     break;
                case 6: onesPlace += "Six";      break;
                case 7: onesPlace += "Seven";    break;
                case 8: onesPlace += "Eight";    break;
                case 9: onesPlace += "Nine";     break;
            }
        }
        
        numAsString = neg + billionsPlace + hMillionsPlace + tMillionsPlace + millionsPlace + hThousandsPlace + tThousandsPlace + thousandsPlace + hundredsPlace + tensPlace + onesPlace;
    }
    else numAsString = "Zero";
    cout << numAsString << endl;
}
