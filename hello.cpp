#include<stdio.h>
#include<iostream>
#include<string>
#include<cmath>
#include<ctime>
#include<fstream>
// #include<vector>

using namespace std;

int myfunction(int number, int space){
    int sum = 0;
    for(int i = 0; i<=number; i+=space){
        sum+=i;
    }
    return sum;
}

int sum_of(int a, int b){
    return a + b;
}
int sum_of(int a, int b, int c){
    return a + b + c;
}
int twoTimes(int a){
    // a1 = 10;
    a = a*2;
    return a;
}
int twoTimesbreference(int &a){
    a = a*2;
    return a;
}

bool logicalexpression(string s){
    switch (s[1])
    {
    case '=':
        return s[0] == s[3];
        break;
    case '!':
        return s[0] != s[3];
        break;
    case '<':
        return s[0] < s[2];
        break;
    case '>':
       return s[0] > s[2];
        break;
    default:
        printf("Invalid input");
        return -1;
        break;
    }
}

int numCapital(string words){
    int num = 0;
    for(int i = 0; i< words.length();i++){
        if(words[i]>='A' && words[i]<='Z'){
            num++;
        }
    }
    return num;
}

string printinputasstring(void){
    string toreturn;
    string word;
    do{
        word = "";
        cout << "Words to add in the string: ";
        // string word;
        cin >> word;
        if(word == "STOP"){
            break;
        }
        toreturn.append(word);
        toreturn.append(" ");
    }while(word != "STOP");
    return toreturn;
}
int sumtwobyrefernce(int &a){
    a = a*2;
    return a;
}
string delchar(string word, char letter){
    // for(int i = word.length() - 1; i >= 0; i--){
    //     if(letter == word[i]){
    //         word.erase(i,1);
    //     }
    // }
    int i = 0;
    while(i < word.length()){
        if(word[i]== letter){
            word.erase(i,1);
        }else{
            i++;
        }
    }
    return word;
}
int halfit(int a, int b){
    return  ((a+b)/2);
} 
int binary_search(int array[], int number, int size){
    int start = 0;
    int end = size-1;
    int i ;
    while(start <= end){
        i = halfit(start, end);
        // cout << i << endl;
    if(array[i] == number){
        return i;
    }else if(number < array[i]){
        end = i-1;     
    }else{
        start = i+1;
    }
    }
    return -1;
}
void bubblesort(int arr[], int length){
    int variable;
    bool counter = false;
    do{
         counter = false;
        for(int i = 1; i < length; i++ ){
            if(arr[i-1] > arr[i]){
                variable = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = variable;
                // arr[i-1],arr[i] = arr[i],arr[i-1];
                counter =  true; 
            }
        }
    }while(counter!=0);
}

int main(){
    // int num = 100;
    // std::string s = "My name is karan bhaskar";
    // int num2 = 10+20;
    // char my_grades = 'z';
    // std::cout<<"Hello world"<<std::endl;
    // std::cout<< num2 << std::endl;
    // printf("num: %d, num2: %d, my grades: %c\n",num,num2,my_grades);
    // printf("Is my grades upper case: %d\n",(my_grades >='A' && my_grades <= 'Z') );
    // if(my_grades >= 'A' && my_grades <= 'Z'){
    //     cout << "Yes my grades are uppercase" << endl;
    // }
    // printf("Is this working");
    // switch(my_grades){
    //     case 'a':
    //     printf("this is a");
    //     break;
    //     case 'b':
    //     printf("this is b");
    //     break;
    //     default:
    //     printf("something else");
    //     break;
    // }
    // int sum = 0;
    // for(int i = 0; i <= 20000; i+=2){
    //     // printf("Hello world\n");
    //     // printf("%d\n",i);
    //     sum += i;
    // }
    // int sum2 = 0;
    // int i = 0;
    // while(i<=20000){
    //     sum2 += i;
    //     i+=2;
    // }
    // int sum3 = 0;
    // int j = 0;
    // do{
    //     sum3 += j;
    //     j+=2;
    // }while(j<=20000);

    // int sum4 = myfunction(20000,2);
    // printf("sum is %d, sum2 is %d, sum3 is %d, sum4 is %d\n",sum, sum2,sum3,sum4);
    // int sumnum;
    // cout << "enter a number:";
    // cin >> sumnum;
    // printf("%d\n",sumnum*10);
    // float sqr = sqrt(25);
    // float sqrt2 =  sqrt(25.25);
    // srand(time(NULL));
    // int number;
    // cout << "Enter a number";
    // cin >> number;
    // for(int i = 0; i < number; i++){
    //     int num = 1000 + (rand()%1001);
    //     printf("%d\n",num);
    // }

    // cout << sum_of(1,2,3) << endl;
    // cout << sum_of(1,2) << endl;
    // int a = 10;
    // float a1 = 10.0;
    // double a2 = 10.00;
    // string a3 = "Hello";
    // char a4 = 'a';
    // bool a5 = true;

    // int b = twoTimes(a);
    // printf("%d\n", a);
    // printf("%d\n", b);
    // int b1 = twoTimesbreference(a);
    // printf("%d\n", a);
    // printf("%d\n", b);


    // printf("size of a: %lu\n", sizeof(a));
    // printf("size of a1: %lu\n", sizeof(a1));
    // printf("size of a2: %lu\n", sizeof(a2));
    // printf("size of a3: %lu\n", sizeof(a3));
    // printf("size of a4: %lu\n", sizeof(a4));
    // printf("size of a5: %lu\n", sizeof(a5));

    // int numbers[5] = {1,2,3,4,5};
    // for(int i = 0; i < 5; i++){
    //   printf("%d\n",numbers[i]);
    // }
    // cout<< numbers;
    // int num1;
    // cout << "number of arrays indices: ";
    // cin >> num1;
    // char numero[num1];
    // for(int i = 0; i < num1;i++){
    //     cout<< "Gimme character to put in array index " << i << ": ";
    //     char char1;
    //     cin >> char1;
    //     numero[i] = char1;
    // }
    // char biggchar = numero[0] ;
    // for(int i = 0; i < num1; i++){
    // //   printf("%c\n",numero[i]);
    //     if(numero[i] > biggchar){
    //         biggchar = numero[i];
    //     }
    // }
    // printf("biggest character is: %c\n",biggchar);
    // printf("Size of numero is: %lu",(sizeof(numero)/sizeof(numero[0])));
//  const float g  = 9.8;
// //  float g = 10;
//  float g1 = 9.8;
// //   float g1 = 10;
//  cout << g << endl;
//  cout << g1 << endl;
// string greeting = "Hello";
// greeting[2] = 'n';
// cout << greeting[0] << endl;
// cout << sizeof(greeting) / sizeof(greeting[0]) << endl;

// cout << "2 > 5: "<< logicalexpression("2>5") << endl;
// cout <<  "1!=5: "<<logicalexpression("1!=5") << endl;
// string name = "KARAN";
// cout << name.length() << endl;
// cout << numCapital("MICHAEL MILJANOVIC")<<endl;
// string str;
// getline(cin, str);
// cout << str << endl;
// name.append(str);
// cout << name << endl;
    // cout << printinputasstring() << endl;
    // string word = "";
    // string outputstr = "";
    // do{
    //     outputstr.append(word);
    //     cout << "Give me a word: ";
    //     getline(cin, word);
    //     word += " ";
    // }while(word != "STOP ");
    
    // cout << outputstr <<endl;
    // string name1 = "Karan BhasKar";
    // name1.erase(1,9);
    // name1.erase(2,2);
    // cout << name1.length() << endl;

    // string name3 = name1.substr(0,5);
    // cout << name3 << endl;
    // cout << name3.length() << endl;
    // cout << delchar("aardvark", 'a') << endl;
    // cout << name1.find("BhasKar") << endl;
    // cout << name1.find("BHaskar") << endl;//18446744073709551615 -> string::npos
    // cout << (string::npos == name1.find("Baskar")) << endl;

    // cout << name1.compare("Karan BhasKar")<< endl;
    // cout << name1.compare("Karan Bhaskar")<< endl;
    // cout << name1.compare("")<< endl;
    /*
    // terminal guide-
    // mv {file_name} {file_directory}
    // cp {file_name} {file_directory}
    // ls -l
    // cd ../
    // g++ hello.cpp -> ./a.out
    // g++ hello.cpp -o hello -> ./hello
    // g++ -c hello.cpp -> g++ hello.o -o hello -> ./hello
    */
    // printf("Hello world");
    // ofstream myOutput;
    // myOutput.open("NewFile.txt");
    // myOutput << "Hello world!" << endl;
    // myOutput.close();
//     ofstream myOutput;
//     myOutput.open("Lecture6b.txt",ios::app);
//     cout << "Give me five intergers : " << endl;
//     for(int i = 0 ; i < 5; i++){
//         cout << "Integer #" << i+1 <<" :";
//         int my_integer;
//         cin >> my_integer;
//         myOutput << my_integer << endl;
//     }
//     myOutput.close();

//     ifstream myInput;
//     string text;
//     myInput.open("Lecture6b.txt");
//    while( myInput >> text){ // getline(myInput, text)
//     cout << text << endl;
//    }
//     myInput.close();
    // vector<int> array = {1,2,3,4,5};
    // cout << find(array.begin(), array.end(), 5) <<endl;
    // int array[1000];
    // srand(time(NULL));
    // for(int i = 0; i < 1000; i++){
    //     array[i] = rand()%1000 + 1;
    // }
    // int found = 0;
    // for(int i = 0 ; i < 1000; i++){
    //     if(array[i]== 100){
    //         found = i;
    //         break;
    //     }
    // }
    // int arr[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[10];
    // srand(time(NULL));
    // for (int i = 0; i < 10; i++) {
    //     arr[i] = rand() % 100 + 1;
    // }

    // cout << "Unsorted array: ";
    // for (int i = 0; i < 10; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // cout << "DO we found the number :" << found << endl;
    // cout << "What number to look for? : ";
    // int num;
    // cin >> num;
    // cout << binary_search(arr,num,12) << endl;
    // bubblesort(arr, 10);
    // int length = 10;
    // int left = 0;
    // int smallest;
    // int variable;
    // while(left < length){
    //     smallest = arr[left];
    //     for(int i = left+1; i < length ; i++){
    //         if(arr[i] < smallest){
    //             // cout <<  arr[i] <<" "<< smallest << endl;
    //             variable = arr[i];  
    //             arr[i] = smallest;
    //             arr[left] = variable;
    //             smallest = variable;
    //             // cout << "second time" << arr[i] <<" "<< smallest << endl;
    //         }
    //     }
    //     left++;
    // }
    //  cout << "sorted array: ";
    // for (int i = 0; i < 10; i++) {
    //     cout << arr[i] << " ";
    // }
    // bubblesort(arr,10);
    //  cout << "sorted array: ";
    // for (int i = 0; i < 10; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // int jum = 10;
    // sumtwobyrefernce(jum);
    // cout << jum << endl;
// int *p2; 
// int x = 0; 
// p2 = &x; 
// *p2 = 12; 
// cout << *p2 << " " << x << endl;

// int i = 12;
// int *p1 = &i;
// cout << *p1 << " " << i << endl;
// *p1 = 24;
// cout << *p1 << " " << i << endl;

  int *p1;
  char *p2;
  
  int pointer1value = 10;
  char pointer2value = 'e';
  
  p1 = &pointer1value;
  p2 = &pointer2value;
  cout << p1 << " " << p2 << endl;
//   cout << p1 << " " << p2 << endl;
  *p1 = *p2;
  cout << p1 << " " << p2 << endl;
    return 0;
}