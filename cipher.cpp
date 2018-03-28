#include<iostream>
using namespace std; 

int main(){
	
	int userChoice;
	int cipherChoice;
	int deciperChoice;
	string messageAfterCipher;
	string messageAfterDecipher;
	string messageCipher;
	getline(cin, messageCipher);
	cout<<messageCipher<<endl;
	string messageDecipher;
	while(true){
	
	cout << "Ahlan ya user ya habibi.\n";
	cout<< "What do you like to do today?\n";
	cout<< "1- Cipher a message\n";
	cout<< "2- Decipher a message\n";
	cout<< "3- End\n";
	
	cin>>userChoice;
	if(userChoice==1){
		messageAfterCipher="";
		cout<< "What type of Cipher you want?\n";
		cout<< "1- Affine Cipher\n";
		cout<< "2- Caesar Cipher\n";
		cout<< "3- Atbash Cipher\n";
		cout<< "4- ROT13  Cipher\n";
		cout<< "5- Baconian Cipher\n";
		cin>>cipherChoice;
		cout<<"Please enter the message to cipher:\n";
		cin.ignore();
		getline(cin, messageCipher);
		int lengthOfMessageCipher = messageCipher.size();
		//Affine Cipher
		if(cipherChoice==1){
			
			int numberOfCharCipher;
			
			for(int i =0;i<lengthOfMessageCipher ;i++){
			
				if(messageCipher[i]=='A'|| messageCipher[i]=='a')
					numberOfCharCipher=(5*0 + 8)%26;
				else if(messageCipher[i]=='B'||messageCipher[i]=='b')
					numberOfCharCipher=(5*1 + 8)%26;
				else if(messageCipher[i]=='C'||messageCipher[i]=='c')
					numberOfCharCipher=(5*2 + 8)%26;
				else if(messageCipher[i]=='D'||messageCipher[i]=='d')
					numberOfCharCipher=(5*3 + 8)%26;
				else if(messageCipher[i]=='E'||messageCipher[i]=='e')
					numberOfCharCipher=(5*4 + 8)%26;
				else if(messageCipher[i]=='F'||messageCipher[i]=='f')
					numberOfCharCipher=(5*5 + 8)%26;
				else if(messageCipher[i]=='G'||messageCipher[i]=='g')
					numberOfCharCipher=(5*6 + 8)%26;
				else if(messageCipher[i]=='H'||messageCipher[i]=='h')
					numberOfCharCipher=(5*7 + 8)%26;
				else if(messageCipher[i]=='I'||messageCipher[i]=='i')
					numberOfCharCipher=(5*8 + 8)%26;
				else if(messageCipher[i]=='J'||messageCipher[i]=='j')
					numberOfCharCipher=(5*9 + 8)%26;
				else if(messageCipher[i]=='K'||messageCipher[i]=='k')
					numberOfCharCipher=(5*10 + 8)%26;
				else if(messageCipher[i]=='L'||messageCipher[i]=='l')
					numberOfCharCipher=(5*11 + 8)%26;
				else if(messageCipher[i]=='M'||messageCipher[i]=='m')
					numberOfCharCipher=(5*12 + 8)%26;
				else if(messageCipher[i]=='N'||messageCipher[i]=='n')
					numberOfCharCipher=(5*13 + 8)%26;
				else if(messageCipher[i]=='O'||messageCipher[i]=='o')
					numberOfCharCipher=(5*14 + 8)%26;
				else if(messageCipher[i]=='P'||messageCipher[i]=='p')
					numberOfCharCipher=(5*15 + 8)%26;
				else if(messageCipher[i]=='Q'||messageCipher[i]=='q')
					numberOfCharCipher=(5*16 + 8)%26;
				else if(messageCipher[i]=='R'||messageCipher[i]=='r')
					numberOfCharCipher=(5*17 + 8)%26;
				else if(messageCipher[i]=='S'||messageCipher[i]=='s')
					numberOfCharCipher=(5*18 + 8)%26;
				else if(messageCipher[i]=='T'||messageCipher[i]=='t')
					numberOfCharCipher=(5*19 + 8)%26;
				else if(messageCipher[i]=='U'||messageCipher[i]=='u')
					numberOfCharCipher=(5*20 + 8)%26;
				else if(messageCipher[i]=='V'||messageCipher[i]=='v')
					numberOfCharCipher=(5*21 + 8)%26;
				else if(messageCipher[i]=='W'||messageCipher[i]=='w')
					numberOfCharCipher=(5*22 + 8)%26;
				else if(messageCipher[i]=='X'||messageCipher[i]=='x')
					numberOfCharCipher=(5*23 + 8)%26;
				else if(messageCipher[i]=='Y'||messageCipher[i]=='y')
					numberOfCharCipher=(5*24 + 8)%26;
				else if(messageCipher[i]=='Z'||messageCipher[i]=='z')
					numberOfCharCipher=(5*25 + 8)%26;
				
				if(numberOfCharCipher==0)
					messageAfterCipher+='A';
				else if(numberOfCharCipher==1)
					messageAfterCipher+='B';
				else if(numberOfCharCipher==2)
					messageAfterCipher+='C';
				else if(numberOfCharCipher==3)
					messageAfterCipher+='D';
				else if(numberOfCharCipher==4)
					messageAfterCipher+='E';
				else if(numberOfCharCipher==5)
					messageAfterCipher+='F';
				else if(numberOfCharCipher==6)
					messageAfterCipher+='G';
				else if(numberOfCharCipher==7)
					messageAfterCipher+='H';
				else if(numberOfCharCipher==8)
					messageAfterCipher+='I';
				else if(numberOfCharCipher==9)
					messageAfterCipher+='J';
				else if(numberOfCharCipher==10)
					messageAfterCipher+='K';
				else if(numberOfCharCipher==11)
					messageAfterCipher+='L';
				else if(numberOfCharCipher==12)
					messageAfterCipher+='M';
				else if(numberOfCharCipher==13)
					messageAfterCipher+='N';
				else if(numberOfCharCipher==14)
					messageAfterCipher+='O';
				else if(numberOfCharCipher==15)
					messageAfterCipher+='P';
				else if(numberOfCharCipher==16)
					messageAfterCipher+='Q';
				else if(numberOfCharCipher==17)
					messageAfterCipher+='R';
				else if(numberOfCharCipher==18)
					messageAfterCipher+='S';
				else if(numberOfCharCipher==19)
					messageAfterCipher+='T';
				else if(numberOfCharCipher==20)
					messageAfterCipher+='U';
				else if(numberOfCharCipher==21)
					messageAfterCipher+='V';
				else if(numberOfCharCipher==22)
					messageAfterCipher+='W';
				else if(numberOfCharCipher==23)
					messageAfterCipher+='X';
				else if(numberOfCharCipher==24)
					messageAfterCipher+='Y';
				else if(numberOfCharCipher==25)
					messageAfterCipher+='Z';
			
			}
			
			
		}
		//Caesar Cipher
		else if(cipherChoice==2){
			int numberOfPositionShifted=3;
			
			int numberOfCharCipher;
			
			for(int i =0;i<lengthOfMessageCipher ;i++){
			
				if(messageCipher[i]=='A'|| messageCipher[i]=='a'){
					numberOfCharCipher=(0 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='B'||messageCipher[i]=='b'){
					numberOfCharCipher=(1 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='C'||messageCipher[i]=='c'){
					numberOfCharCipher=(2 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='D'||messageCipher[i]=='d'){
					numberOfCharCipher=(3 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='E'||messageCipher[i]=='e'){
					numberOfCharCipher=(4 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='F'||messageCipher[i]=='f'){
					numberOfCharCipher=(5 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}			
				else if(messageCipher[i]=='G'||messageCipher[i]=='g'){

					numberOfCharCipher=(6 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='H'||messageCipher[i]=='h'){
					numberOfCharCipher=(7 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				
				else if(messageCipher[i]=='I'||messageCipher[i]=='i'){
					numberOfCharCipher=(8 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='J'||messageCipher[i]=='j'){
					numberOfCharCipher=(9 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='K'||messageCipher[i]=='k'){
					numberOfCharCipher=(10 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='L'||messageCipher[i]=='l'){
					numberOfCharCipher=(11 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='M'||messageCipher[i]=='m'){
					numberOfCharCipher=(12 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='N'||messageCipher[i]=='n'){
					numberOfCharCipher=(13 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='O'||messageCipher[i]=='o'){
					numberOfCharCipher=(14 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='P'||messageCipher[i]=='p'){
					numberOfCharCipher=(15 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='Q'||messageCipher[i]=='q'){
					numberOfCharCipher=(16 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='R'||messageCipher[i]=='r'){
					numberOfCharCipher=(17 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='S'||messageCipher[i]=='s'){
					numberOfCharCipher=(18 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='T'||messageCipher[i]=='t'){
					numberOfCharCipher=(19 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='U'||messageCipher[i]=='u'){
					numberOfCharCipher=(20 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='V'||messageCipher[i]=='v'){
					numberOfCharCipher=(21 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='W'||messageCipher[i]=='w'){
					numberOfCharCipher=(22 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='X'||messageCipher[i]=='x'){
					numberOfCharCipher=(23 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='Y'||messageCipher[i]=='y'){
					numberOfCharCipher=(24 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}
				else if(messageCipher[i]=='Z'||messageCipher[i]=='z'){
					numberOfCharCipher=(25 - numberOfPositionShifted )%26;
					if(numberOfCharCipher<0)
						numberOfCharCipher+=26;
				}	
				
				if(numberOfCharCipher==0)
					messageAfterCipher+='A';
				else if(numberOfCharCipher==1)
					messageAfterCipher+='B';
				else if(numberOfCharCipher==2)
					messageAfterCipher+='C';
				else if(numberOfCharCipher==3)
					messageAfterCipher+='D';
				else if(numberOfCharCipher==4)
					messageAfterCipher+='E';
				else if(numberOfCharCipher==5)
					messageAfterCipher+='F';
				else if(numberOfCharCipher==6)
					messageAfterCipher+='G';
				else if(numberOfCharCipher==7)
					messageAfterCipher+='H';
				else if(numberOfCharCipher==8)
					messageAfterCipher+='I';
				else if(numberOfCharCipher==9)
					messageAfterCipher+='J';
				else if(numberOfCharCipher==10)
					messageAfterCipher+='K';
				else if(numberOfCharCipher==11)
					messageAfterCipher+='L';
				else if(numberOfCharCipher==12)
					messageAfterCipher+='M';
				else if(numberOfCharCipher==13)
					messageAfterCipher+='N';
				else if(numberOfCharCipher==14)
					messageAfterCipher+='O';
				else if(numberOfCharCipher==15)
					messageAfterCipher+='P';
				else if(numberOfCharCipher==16)
					messageAfterCipher+='Q';
				else if(numberOfCharCipher==17)
					messageAfterCipher+='R';
				else if(numberOfCharCipher==18)
					messageAfterCipher+='S';
				else if(numberOfCharCipher==19)
					messageAfterCipher+='T';
				else if(numberOfCharCipher==20)
					messageAfterCipher+='U';
				else if(numberOfCharCipher==21)
					messageAfterCipher+='V';
				else if(numberOfCharCipher==22)
					messageAfterCipher+='W';
				else if(numberOfCharCipher==23)
					messageAfterCipher+='X';
				else if(numberOfCharCipher==24)
					messageAfterCipher+='Y';
				else if(numberOfCharCipher==25)
					messageAfterCipher+='Z';
			}	
		}
		//Atbash Cipher
		else if(cipherChoice==3){
			
			for(int i =0;i<lengthOfMessageCipher ;i++){
			
				if(messageCipher[i]=='A'|| messageCipher[i]=='a')
					messageAfterCipher+='Z';
				else if(messageCipher[i]=='B'||messageCipher[i]=='b')
					messageAfterCipher+='Y';
				else if(messageCipher[i]=='C'||messageCipher[i]=='c')
					messageAfterCipher+='X';
				else if(messageCipher[i]=='D'||messageCipher[i]=='d')
					messageAfterCipher+='W';
				else if(messageCipher[i]=='E'||messageCipher[i]=='e')
					messageAfterCipher+='V';
				else if(messageCipher[i]=='F'||messageCipher[i]=='f')
					messageAfterCipher+='U';
				else if(messageCipher[i]=='G'||messageCipher[i]=='g')
					messageAfterCipher+='T';
				else if(messageCipher[i]=='H'||messageCipher[i]=='h')
					messageAfterCipher+='S';
				else if(messageCipher[i]=='I'||messageCipher[i]=='i')
					messageAfterCipher+='R';
				else if(messageCipher[i]=='J'||messageCipher[i]=='j')
					messageAfterCipher+='Q';
				else if(messageCipher[i]=='K'||messageCipher[i]=='k')
					messageAfterCipher+='P';
				else if(messageCipher[i]=='L'||messageCipher[i]=='l')
					messageAfterCipher+='O';
				else if(messageCipher[i]=='M'||messageCipher[i]=='m')
					messageAfterCipher+='N';
				else if(messageCipher[i]=='N'||messageCipher[i]=='n')
					messageAfterCipher+='M';
				else if(messageCipher[i]=='O'||messageCipher[i]=='o')
					messageAfterCipher+='L';
				else if(messageCipher[i]=='P'||messageCipher[i]=='p')
					messageAfterCipher+='K';
				else if(messageCipher[i]=='Q'||messageCipher[i]=='q')
					messageAfterCipher+='J';
				else if(messageCipher[i]=='R'||messageCipher[i]=='r')
					messageAfterCipher+='I';
				else if(messageCipher[i]=='S'||messageCipher[i]=='s')
					messageAfterCipher+='H';
				else if(messageCipher[i]=='T'||messageCipher[i]=='t')
					messageAfterCipher+='G';
				else if(messageCipher[i]=='U'||messageCipher[i]=='u')
					messageAfterCipher+='F';
				else if(messageCipher[i]=='V'||messageCipher[i]=='v')
					messageAfterCipher+='E';
				else if(messageCipher[i]=='W'||messageCipher[i]=='w')
					messageAfterCipher+='D';
				else if(messageCipher[i]=='X'||messageCipher[i]=='x')
					messageAfterCipher+='C';
				else if(messageCipher[i]=='Y'||messageCipher[i]=='y')
					messageAfterCipher+='B';
				else if(messageCipher[i]=='Z'||messageCipher[i]=='z')
					messageAfterCipher+='A';
				else
					messageAfterCipher=messageAfterCipher;		
				
			}
		}
		//ROT13  Cipher
		else if(cipherChoice==4){
			for(int i =0;i<lengthOfMessageCipher ;i++){
			
				if(messageCipher[i]=='A'|| messageCipher[i]=='a')
					messageAfterCipher+='N';
				else if(messageCipher[i]=='B'||messageCipher[i]=='b')
					messageAfterCipher+='O';
				else if(messageCipher[i]=='C'||messageCipher[i]=='c')
					messageAfterCipher+='P';
				else if(messageCipher[i]=='D'||messageCipher[i]=='d')
					messageAfterCipher+='Q';
				else if(messageCipher[i]=='E'||messageCipher[i]=='e')
					messageAfterCipher+='R';
				else if(messageCipher[i]=='F'||messageCipher[i]=='f')
					messageAfterCipher+='S';
				else if(messageCipher[i]=='G'||messageCipher[i]=='g')
					messageAfterCipher+='T';
				else if(messageCipher[i]=='H'||messageCipher[i]=='h')
					messageAfterCipher+='U';
				else if(messageCipher[i]=='I'||messageCipher[i]=='i')
					messageAfterCipher+='V';
				else if(messageCipher[i]=='J'||messageCipher[i]=='j')
					messageAfterCipher+='W';
				else if(messageCipher[i]=='K'||messageCipher[i]=='k')
					messageAfterCipher+='X';
				else if(messageCipher[i]=='L'||messageCipher[i]=='l')
					messageAfterCipher+='Y';
				else if(messageCipher[i]=='M'||messageCipher[i]=='m')
					messageAfterCipher+='Z';
				else if(messageCipher[i]=='N'||messageCipher[i]=='n')
					messageAfterCipher+='A';
				else if(messageCipher[i]=='O'||messageCipher[i]=='o')
					messageAfterCipher+='B';
				else if(messageCipher[i]=='P'||messageCipher[i]=='p')
					messageAfterCipher+='C';
				else if(messageCipher[i]=='Q'||messageCipher[i]=='q')
					messageAfterCipher+='D';
				else if(messageCipher[i]=='R'||messageCipher[i]=='r')
					messageAfterCipher+='E';
				else if(messageCipher[i]=='S'||messageCipher[i]=='s')
					messageAfterCipher+='F';
				else if(messageCipher[i]=='T'||messageCipher[i]=='t')
					messageAfterCipher+='G';
				else if(messageCipher[i]=='U'||messageCipher[i]=='u')
					messageAfterCipher+='H';
				else if(messageCipher[i]=='V'||messageCipher[i]=='v')
					messageAfterCipher+='I';
				else if(messageCipher[i]=='W'||messageCipher[i]=='w')
					messageAfterCipher+='J';
				else if(messageCipher[i]=='X'||messageCipher[i]=='x')
					messageAfterCipher+='K';
				else if(messageCipher[i]=='Y'||messageCipher[i]=='y')
					messageAfterCipher+='L';
				else if(messageCipher[i]=='Z'||messageCipher[i]=='z')
					messageAfterCipher+='M';
				else
					messageAfterCipher+=messageAfterCipher[i];
			}
		}
		
		//Baconian Cipher
		else if(cipherChoice==5){
			for(int i =0;i<lengthOfMessageCipher ;i++){
			
				if(messageCipher[i]=='A'|| messageCipher[i]=='a')
					messageAfterCipher+="aaaaa ";
				else if(messageCipher[i]=='B'||messageCipher[i]=='b')
					messageAfterCipher+="aaaab ";
				else if(messageCipher[i]=='C'||messageCipher[i]=='c')
					messageAfterCipher+="aaaba ";
				else if(messageCipher[i]=='D'||messageCipher[i]=='d')
					messageAfterCipher+="aaabb ";
				else if(messageCipher[i]=='E'||messageCipher[i]=='e')
					messageAfterCipher+="aabaa ";
				else if(messageCipher[i]=='F'||messageCipher[i]=='f')
					messageAfterCipher+="aabab ";
				else if(messageCipher[i]=='G'||messageCipher[i]=='g')
					messageAfterCipher+="aabba ";
				else if(messageCipher[i]=='H'||messageCipher[i]=='h')
					messageAfterCipher+="aabbb ";
				else if(messageCipher[i]=='I'||messageCipher[i]=='i')
					messageAfterCipher+="abaaa ";
				else if(messageCipher[i]=='J'||messageCipher[i]=='j')
					messageAfterCipher+="abaab ";
				else if(messageCipher[i]=='K'||messageCipher[i]=='k')
					messageAfterCipher+="ababa ";
				else if(messageCipher[i]=='L'||messageCipher[i]=='l')
					messageAfterCipher+="ababb ";
				else if(messageCipher[i]=='M'||messageCipher[i]=='m')
					messageAfterCipher+="abbaa ";
				else if(messageCipher[i]=='N'||messageCipher[i]=='n')
					messageAfterCipher+="abbab ";
				else if(messageCipher[i]=='O'||messageCipher[i]=='o')
					messageAfterCipher+="abbba ";
				else if(messageCipher[i]=='P'||messageCipher[i]=='p')
					messageAfterCipher+="abbbb ";
				else if(messageCipher[i]=='Q'||messageCipher[i]=='q')
					messageAfterCipher+="baaaa ";
				else if(messageCipher[i]=='R'||messageCipher[i]=='r')
					messageAfterCipher+="baaab ";
				else if(messageCipher[i]=='S'||messageCipher[i]=='s')
					messageAfterCipher+="baaba ";
				else if(messageCipher[i]=='T'||messageCipher[i]=='t')
					messageAfterCipher+="baabb ";
				else if(messageCipher[i]=='U'||messageCipher[i]=='u')
					messageAfterCipher+="babaa ";
				else if(messageCipher[i]=='V'||messageCipher[i]=='v')
					messageAfterCipher+="babab ";
				else if(messageCipher[i]=='W'||messageCipher[i]=='w')
					messageAfterCipher+="babba ";
				else if(messageCipher[i]=='X'||messageCipher[i]=='x')
					messageAfterCipher+="babbb ";
				else if(messageCipher[i]=='Y'||messageCipher[i]=='y')
					messageAfterCipher+="bbaaa ";
				else if(messageCipher[i]=='Z'||messageCipher[i]=='z')
					messageAfterCipher+="bbaab ";
				else
					messageAfterCipher+=messageAfterCipher[i];
			}
		}
		
		cout << "\nthe message after cipher is: "<< messageAfterCipher<<endl<<endl;
				
		
	}
	else if(userChoice==2){
		messageAfterDecipher="";
		cout<< "What type of Decipher you want?\n";
		cout<< "1- Affine Decipher\n";
		cout<< "2- Caesar Decipher\n";
		cout<< "3- Atbash Decipher\n";
		cout<< "4- ROT13 Decipher\n";
		cout<< "5- Baconian Decipher\n";
		
		cin>>deciperChoice;
		cout<<"Please enter the message to decipher:\n";
		cin.ignore();
		getline(cin, messageDecipher);
		int lengthOfMessageCipher = messageDecipher.size();
		//Affine Decipher
		if(deciperChoice==1){
			
			 int numberOfCharCipher;
			
			for(int i =0;i<lengthOfMessageCipher ;i++){
			
				if(messageDecipher[i]=='A'|| messageDecipher[i]=='a'){
					numberOfCharCipher=(21*(0 - 8)%26)+26;
				}else if(messageDecipher[i]=='B'||messageDecipher[i]=='b')
					numberOfCharCipher=(21*(1 - 8)%26)+26;
				else if(messageDecipher[i]=='C'||messageDecipher[i]=='c')
					numberOfCharCipher=(21*(2 - 8)%26)+26;
				else if(messageDecipher[i]=='D'||messageDecipher[i]=='d')
					numberOfCharCipher=(21*(3 - 8)%26)+26;
				else if(messageDecipher[i]=='E'||messageDecipher[i]=='e')
					numberOfCharCipher=(21*(4 - 8)%26)+26;
				else if(messageDecipher[i]=='F'||messageDecipher[i]=='f')
					numberOfCharCipher=(21*(5 - 8)%26)+26;
				else if(messageDecipher[i]=='G'||messageDecipher[i]=='g')
					numberOfCharCipher=(21*(6 - 8)%26)+26;
				else if(messageDecipher[i]=='H'||messageDecipher[i]=='h')
					numberOfCharCipher=(21*(7 - 8)%26)+26;
				else if(messageDecipher[i]=='I'||messageDecipher[i]=='i')
					numberOfCharCipher=21*(8 - 8)%26;
				else if(messageDecipher[i]=='J'||messageDecipher[i]=='j')
					numberOfCharCipher=21*(9 - 8)%26;
				else if(messageDecipher[i]=='K'||messageDecipher[i]=='k')
					numberOfCharCipher=21*(10 - 8)%26;
				else if(messageDecipher[i]=='L'||messageDecipher[i]=='l')
					numberOfCharCipher=21*(11 - 8)%26;
				else if(messageDecipher[i]=='M'||messageDecipher[i]=='m')
					numberOfCharCipher=21*(12 - 8)%26;
				else if(messageDecipher[i]=='N'||messageDecipher[i]=='n')
					numberOfCharCipher=21*(13 - 8)%26;
				else if(messageCipher[i]=='O'||messageDecipher[i]=='o')
					numberOfCharCipher=21*(14 - 8)%26;
				else if(messageCipher[i]=='P'||messageDecipher[i]=='p')
					numberOfCharCipher=21*(15 - 8)%26;
				else if(messageDecipher[i]=='Q'||messageDecipher[i]=='q')
					numberOfCharCipher=21*(16 - 8)%26;
				else if(messageDecipher[i]=='R'||messageDecipher[i]=='r')
					numberOfCharCipher=21*(17 - 8)%26;
				else if(messageDecipher[i]=='S'||messageDecipher[i]=='s')
					numberOfCharCipher=21*(18 - 8)%26;
				else if(messageDecipher[i]=='T'||messageDecipher[i]=='t')
					numberOfCharCipher=21*(19 - 8)%26;
				else if(messageDecipher[i]=='U'||messageDecipher[i]=='u')
					numberOfCharCipher=21*(20 - 8)%26;
				else if(messageDecipher[i]=='V'||messageDecipher[i]=='v')
					numberOfCharCipher=21*(21 - 8)%26;
				else if(messageDecipher[i]=='W'||messageDecipher[i]=='w')
					numberOfCharCipher=21*(22 - 8)%26;
				else if(messageDecipher[i]=='X'||messageDecipher[i]=='x')
					numberOfCharCipher=21*(23 - 8)%26;
				else if(messageDecipher[i]=='Y'||messageDecipher[i]=='y')
					numberOfCharCipher=21*(24 - 8)%26;
				else if(messageDecipher[i]=='Z'||messageDecipher[i]=='z')
					numberOfCharCipher=21*(25 - 8)%26;
				
				
				
				if(numberOfCharCipher==0)
					messageAfterDecipher+='A';
				else if(numberOfCharCipher==1)
					messageAfterDecipher+='B';
				else if(numberOfCharCipher==2)
					messageAfterDecipher+='C';
				else if(numberOfCharCipher==3)
					messageAfterDecipher+='D';
				else if(numberOfCharCipher==4)
					messageAfterDecipher+='E';
				else if(numberOfCharCipher==5)
					messageAfterDecipher+='F';
				else if(numberOfCharCipher==6)
					messageAfterDecipher+='G';
				else if(numberOfCharCipher==7)
					messageAfterDecipher+='H';
				else if(numberOfCharCipher==8)
					messageAfterDecipher+='I';
				else if(numberOfCharCipher==9)
					messageAfterDecipher+='J';
				else if(numberOfCharCipher==10)
					messageAfterDecipher+='K';
				else if(numberOfCharCipher==11)
					messageAfterDecipher+='L';
				else if(numberOfCharCipher==12)
					messageAfterDecipher+='M';
				else if(numberOfCharCipher==13)
					messageAfterDecipher+='N';
				else if(numberOfCharCipher==14)
					messageAfterDecipher+='O';
				else if(numberOfCharCipher==15)
					messageAfterDecipher+='P';
				else if(numberOfCharCipher==16)
					messageAfterDecipher+='Q';
				else if(numberOfCharCipher==17)
					messageAfterDecipher+='R';
				else if(numberOfCharCipher==18)
					messageAfterDecipher+='S';
				else if(numberOfCharCipher==19)
					messageAfterDecipher+='T';
				else if(numberOfCharCipher==20)
					messageAfterDecipher+='U';
				else if(numberOfCharCipher==21)
					messageAfterDecipher+='V';
				else if(numberOfCharCipher==22)
					messageAfterDecipher+='W';
				else if(numberOfCharCipher==23)
					messageAfterDecipher+='X';
				else if(numberOfCharCipher==24)
					messageAfterDecipher+='Y';
				else if(numberOfCharCipher==25)
					messageAfterDecipher+='Z';
				
		
			}
			
			
		}
		//Caesar Decipher
		else if(deciperChoice==2){
			int numberOfPositionShifted=3;
			
			int numberOfCharCipher;
			
			for(int i =0;i<lengthOfMessageCipher ;i++){
			
				if(messageDecipher[i]=='A'|| messageDecipher[i]=='a')
					numberOfCharCipher=(0 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='B'||messageDecipher[i]=='b')
					numberOfCharCipher=(1 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='C'||messageDecipher[i]=='c')
					numberOfCharCipher=(2 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='D'||messageDecipher[i]=='d')
					numberOfCharCipher=(3 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='E'||messageDecipher[i]=='e')
					numberOfCharCipher=(4 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='F'||messageDecipher[i]=='f')
					numberOfCharCipher=(5 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='G'||messageDecipher[i]=='g')
					numberOfCharCipher=(6 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='H'||messageDecipher[i]=='h')
					numberOfCharCipher=(7 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='I'||messageDecipher[i]=='i')
					numberOfCharCipher=(8 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='J'||messageDecipher[i]=='j')
					numberOfCharCipher=(9 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='K'||messageDecipher[i]=='k')
					numberOfCharCipher=(10 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='L'||messageDecipher[i]=='l')
					numberOfCharCipher=(11 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='M'||messageDecipher[i]=='m')
					numberOfCharCipher=(12 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='N'||messageDecipher[i]=='n')
					numberOfCharCipher=(13+ numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='O'||messageDecipher[i]=='o')
					numberOfCharCipher=(14 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='P'||messageDecipher[i]=='p')
					numberOfCharCipher=(15 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='Q'||messageDecipher[i]=='q')
					numberOfCharCipher=(16 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='R'||messageDecipher[i]=='r')
					numberOfCharCipher=(17 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='S'||messageDecipher[i]=='s')
					numberOfCharCipher=(18 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='T'||messageDecipher[i]=='t')
					numberOfCharCipher=(19 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='U'||messageDecipher[i]=='u')
					numberOfCharCipher=(20 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='V'||messageDecipher[i]=='v')
					numberOfCharCipher=(21 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='W'||messageDecipher[i]=='w')
					numberOfCharCipher=(22 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='X'||messageDecipher[i]=='x')
					numberOfCharCipher=(23 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='Y'||messageDecipher[i]=='y')
					numberOfCharCipher=(24 + numberOfPositionShifted )%26;
				else if(messageDecipher[i]=='Z'||messageDecipher[i]=='z')
					numberOfCharCipher=(25 + numberOfPositionShifted )%26;
				
				if(numberOfCharCipher==0)
					messageAfterDecipher+='A';
				else if(numberOfCharCipher==1)
					messageAfterDecipher+='B';
				else if(numberOfCharCipher==2)
					messageAfterDecipher+='C';
				else if(numberOfCharCipher==3)
					messageAfterDecipher+='D';
				else if(numberOfCharCipher==4)
					messageAfterDecipher+='E';
				else if(numberOfCharCipher==5)
					messageAfterDecipher+='F';
				else if(numberOfCharCipher==6)
					messageAfterDecipher+='G';
				else if(numberOfCharCipher==7)
					messageAfterDecipher+='H';
				else if(numberOfCharCipher==8)
					messageAfterDecipher+='I';
				else if(numberOfCharCipher==9)
					messageAfterDecipher+='J';
				else if(numberOfCharCipher==10)
					messageAfterDecipher+='K';
				else if(numberOfCharCipher==11)
					messageAfterDecipher+='L';
				else if(numberOfCharCipher==12)
					messageAfterDecipher+='M';
				else if(numberOfCharCipher==13)
					messageAfterDecipher+='N';
				else if(numberOfCharCipher==14)
					messageAfterDecipher+='O';
				else if(numberOfCharCipher==15)
					messageAfterDecipher+='P';
				else if(numberOfCharCipher==16)
					messageAfterDecipher+='Q';
				else if(numberOfCharCipher==17)
					messageAfterDecipher+='R';
				else if(numberOfCharCipher==18)
					messageAfterDecipher+='S';
				else if(numberOfCharCipher==19)
					messageAfterDecipher+='T';
				else if(numberOfCharCipher==20)
					messageAfterDecipher+='U';
				else if(numberOfCharCipher==21)
					messageAfterDecipher+='V';
				else if(numberOfCharCipher==22)
					messageAfterDecipher+='W';
				else if(numberOfCharCipher==23)
					messageAfterDecipher+='X';
				else if(numberOfCharCipher==24)
					messageAfterDecipher+='Y';
				else if(numberOfCharCipher==25)
					messageAfterDecipher+='Z';
			}	
			
			
		}
		//Atbash Decipher
		else if(deciperChoice==3){
			for(int i =0;i<lengthOfMessageCipher ;i++){
			
				if(messageDecipher[i]=='A'|| messageDecipher[i]=='a')
					messageAfterDecipher+='Z';
				else if(messageDecipher[i]=='B'||messageDecipher[i]=='b')
					messageAfterDecipher+='Y';
				else if(messageDecipher[i]=='C'||messageDecipher[i]=='c')
					messageAfterDecipher+='X';
				else if(messageDecipher[i]=='D'||messageDecipher[i]=='d')
					messageAfterDecipher+='W';
				else if(messageDecipher[i]=='E'||messageDecipher[i]=='e')
					messageAfterDecipher+='V';
				else if(messageDecipher[i]=='F'||messageDecipher[i]=='f')
					messageAfterDecipher+='U';
				else if(messageDecipher[i]=='G'||messageDecipher[i]=='g')
					messageAfterDecipher+='T';
				else if(messageDecipher[i]=='H'||messageDecipher[i]=='h')
					messageAfterDecipher+='S';
				else if(messageDecipher[i]=='I'||messageDecipher[i]=='i')
					messageAfterDecipher+='R';
				else if(messageDecipher[i]=='J'||messageDecipher[i]=='j')
					messageAfterDecipher+='Q';
				else if(messageDecipher[i]=='K'||messageDecipher[i]=='k')
					messageAfterDecipher+='P';
				else if(messageDecipher[i]=='L'||messageDecipher[i]=='l')
					messageAfterDecipher+='O';
				else if(messageDecipher[i]=='M'||messageDecipher[i]=='m')
					messageAfterDecipher+='N';
				else if(messageDecipher[i]=='N'||messageDecipher[i]=='n')
					messageAfterDecipher+='M';
				else if(messageDecipher[i]=='O'||messageDecipher[i]=='o')
					messageAfterDecipher+='L';
				else if(messageDecipher[i]=='P'||messageDecipher[i]=='p')
					messageAfterDecipher+='K';
				else if(messageDecipher[i]=='Q'||messageDecipher[i]=='q')
					messageAfterDecipher+='J';
				else if(messageDecipher[i]=='R'||messageDecipher[i]=='r')
					messageAfterDecipher+='I';
				else if(messageDecipher[i]=='S'||messageDecipher[i]=='s')
					messageAfterDecipher+='H';
				else if(messageDecipher[i]=='T'||messageDecipher[i]=='t')
					messageAfterDecipher+='G';
				else if(messageDecipher[i]=='U'||messageDecipher[i]=='u')
					messageAfterDecipher+='F';
				else if(messageDecipher[i]=='V'||messageDecipher[i]=='v')
					messageAfterDecipher+='E';
				else if(messageDecipher[i]=='W'||messageDecipher[i]=='w')
					messageAfterDecipher+='D';
				else if(messageDecipher[i]=='X'||messageDecipher[i]=='x')
					messageAfterDecipher+='C';
				else if(messageDecipher[i]=='Y'||messageDecipher[i]=='y')
					messageAfterDecipher+='B';
				else if(messageDecipher[i]=='Z'||messageDecipher[i]=='z')
					messageAfterDecipher+='A';
				else
					messageAfterDecipher+=messageAfterDecipher[i];
				
				
				
				
			}
		}
		//ROT13 Decipher
		else if(deciperChoice==4){
			for(int i =0;i<lengthOfMessageCipher ;i++){
			
				if(messageDecipher[i]=='A'|| messageDecipher[i]=='a')
					messageAfterDecipher+='N';
				else if(messageDecipher[i]=='B'||messageDecipher[i]=='b')
					messageAfterDecipher+='O';
				else if(messageDecipher[i]=='C'||messageDecipher[i]=='c')
					messageAfterDecipher+='P';
				else if(messageDecipher[i]=='D'||messageDecipher[i]=='d')
					messageAfterDecipher+='Q';
				else if(messageDecipher[i]=='E'||messageDecipher[i]=='e')
					messageAfterDecipher+='R';
				else if(messageDecipher[i]=='F'||messageDecipher[i]=='f')
					messageAfterDecipher+='S';
				else if(messageDecipher[i]=='G'||messageDecipher[i]=='g')
					messageAfterDecipher+='T';
				else if(messageDecipher[i]=='H'||messageDecipher[i]=='h')
					messageAfterDecipher+='U';
				else if(messageDecipher[i]=='I'||messageDecipher[i]=='i')
					messageAfterDecipher+='V';
				else if(messageDecipher[i]=='J'||messageDecipher[i]=='j')
					messageAfterDecipher+='W';
				else if(messageDecipher[i]=='K'||messageDecipher[i]=='k')
					messageAfterDecipher+='X';
				else if(messageDecipher[i]=='L'||messageDecipher[i]=='l')
					messageAfterDecipher+='Y';
				else if(messageDecipher[i]=='M'||messageDecipher[i]=='m')
					messageAfterDecipher+='Z';
				else if(messageDecipher[i]=='N'||messageDecipher[i]=='n')
					messageAfterDecipher+='A';
				else if(messageDecipher[i]=='O'||messageDecipher[i]=='o')
					messageAfterDecipher+='B';
				else if(messageDecipher[i]=='P'||messageDecipher[i]=='p')
					messageAfterDecipher+='C';
				else if(messageDecipher[i]=='Q'||messageDecipher[i]=='q')
					messageAfterDecipher+='D';
				else if(messageDecipher[i]=='R'||messageDecipher[i]=='r')
					messageAfterDecipher+='E';
				else if(messageDecipher[i]=='S'||messageDecipher[i]=='s')
					messageAfterDecipher+='F';
				else if(messageDecipher[i]=='T'||messageDecipher[i]=='t')
					messageAfterDecipher+='G';
				else if(messageDecipher[i]=='U'||messageDecipher[i]=='u')
					messageAfterDecipher+='H';
				else if(messageDecipher[i]=='V'||messageDecipher[i]=='v')
					messageAfterDecipher+='I';
				else if(messageDecipher[i]=='W'||messageDecipher[i]=='w')
					messageAfterDecipher+='J';
				else if(messageDecipher[i]=='X'||messageDecipher[i]=='x')
					messageAfterDecipher+='K';
				else if(messageDecipher[i]=='Y'||messageDecipher[i]=='y')
					messageAfterDecipher+='L';
				else if(messageDecipher[i]=='Z'||messageDecipher[i]=='z')
					messageAfterDecipher+='M';
				else
					messageAfterDecipher+=messageAfterDecipher[i];
			}
		}
		//Baconian Decipher
		else if(deciperChoice==5){
			int count =0;
			string messageDicpherLowerCase="";
			for(int i =0;i<lengthOfMessageCipher ;i++){
				if(messageDecipher[i]!=' '){
					count++;
					messageDicpherLowerCase +=tolower(messageDecipher[i]);
				}
				
				if(count==5){
					if(messageDicpherLowerCase=="aaaaa")
						messageAfterDecipher+='A';
					else if(messageDicpherLowerCase=="aaaab")
						messageAfterDecipher+='B';
					else if(messageDicpherLowerCase=="aaaba")
						messageAfterDecipher+='C';
					else if(messageDicpherLowerCase=="aaabb")
						messageAfterDecipher+='D';
					else if(messageDicpherLowerCase=="aabaa")
						messageAfterDecipher+='E';
					else if(messageDicpherLowerCase=="aabab")
						messageAfterDecipher+='F';
					else if(messageDicpherLowerCase=="aabba")
						messageAfterDecipher+='G';
					else if(messageDicpherLowerCase=="aabbb")
						messageAfterDecipher+='H';
					else if(messageDicpherLowerCase=="abaaa")
						messageAfterDecipher+='I';
					else if(messageDicpherLowerCase=="abaab")
						messageAfterDecipher+='J';
					else if(messageDicpherLowerCase=="ababa")
						messageAfterDecipher+='K';
					else if(messageDicpherLowerCase=="ababb")
						messageAfterDecipher+='L';
					else if(messageDicpherLowerCase=="abbaa")
						messageAfterDecipher+='M';
					else if(messageDicpherLowerCase=="abbab")
						messageAfterDecipher+='N';
					else if(messageDicpherLowerCase=="abbba")
						messageAfterDecipher+='O';
					else if(messageDicpherLowerCase=="abbbb")
						messageAfterDecipher+='P';
					else if(messageDicpherLowerCase=="baaaa")
						messageAfterDecipher+='Q';
					else if(messageDicpherLowerCase=="baaab")
						messageAfterDecipher+='R';
					else if(messageDicpherLowerCase=="baaba")
						messageAfterDecipher+='S';
					else if(messageDicpherLowerCase=="baabb")
						messageAfterDecipher+='T';
					else if(messageDicpherLowerCase=="babaa")
						messageAfterDecipher+='U';
					else if(messageDicpherLowerCase=="babaa")
						messageAfterDecipher+='V';
					else if(messageDicpherLowerCase=="babba")
						messageAfterDecipher+='W';
					else if(messageDicpherLowerCase=="babbb")
						messageAfterDecipher+='X';
					else if(messageDicpherLowerCase=="bbaaa")
						messageAfterDecipher+='Y';
					else if(messageDicpherLowerCase=="bbaab")
						messageAfterDecipher+='Z';
					
					messageDicpherLowerCase="";
					count=0;
				}	
			}
			
		}
		
		cout << "\nthe message after decipher is: "<< messageAfterDecipher<<endl<<endl;	
		
		
	}
	else if(userChoice==3)
		return 0;
	}
	
}
