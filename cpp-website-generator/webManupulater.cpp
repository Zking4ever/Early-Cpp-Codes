#include <iostream>
#include <fstream>
using namespace std;

int textCounter=0;//to give them unique id	
	ofstream Outfile;
void fileOpener(){
	if(Outfile.is_open()){
		cout<<"file already open"<<endl;
	}else{
		Outfile.open("webByCplus.html",ios::out);
  	    Outfile<<"<html><body>"<<endl;
	}
}

void writeCode(string text,int size){
	Outfile<<"<span id='t"<<textCounter<<"'>"<<text<<"</span><br>"<<endl;
	Outfile<<"<style> #t"<<textCounter<<"{ font-size:"<<size<<"; position: absolute;}</style>"<<endl;
	
}
void  AddText(){
	string text;
	int fsize;
	cout<<"Adding text... Enter the text : "; cin>>text;
	cout<<"Greate... Now enter the font-size : "; cin>>fsize;
	writeCode(text,fsize);
}
void Animation(){
	cout<<endl;
	cout<<"What animation do you want?"<<endl;
	cout<<"1.animating text"<<endl;
	cout<<"2.Background Color animation"<<endl;
		int choise; cout<<"choise: ";cin>>choise;
	switch(choise){
		case 1: AddText();
				cout<<"text added...Now what animation do you want?"<<endl;
				cout<<"1. horizontal movment"<<endl;
				cout<<"2. vertical movment"<<endl;
				cout<<"3. Color animation"<<endl;
					int animtype; cout<<"choise: ";cin>>animtype;
					switch(animtype){
						case 1: Outfile<<"<style> #t"<<textCounter<<"{animation: txtanimation"<<textCounter<<" 5s ease infinite }@keyframes txtanimation"<<textCounter<<"{ 50%{ transform: translateX(100px) } }</style>"<<endl;
								cout<<"Animation added"<<endl;
								break;
						case 2: Outfile<<"<style> #t"<<textCounter<<"{{animation: txtanimation"<<textCounter<<" 5s ease infinite }@keyframes txtanimation"<<textCounter<<"{ 50%{ transform: translateY(100px) } }</style>"<<endl;
								cout<<"Animation added"<<endl;
								break;	
						case 3: string txtcolors[2];
					   		   	for(int i=0;i<2;i++){
									cout<<"Color "<<i+1<<": ";cin>>txtcolors[i];
										}
								Outfile<<"<style> #t"<<textCounter<<"{{animation: txtanimation"<<textCounter<<" 5s ease infinite }@keyframes txtanimation"<<textCounter<<"{ 40%{ color:"<<txtcolors[0]<<" } 80%{ color: "<<txtcolors[1]<<" }</style>"<<endl;
								cout<<"Animation added"<<endl;
								break;	
					}	
	   	   	   	   	   	textCounter++;	
					break;
		case 2: cout<<"Going to animate the background "<<endl;
				cout<<"Enter colors you want (give attention to spelling)"<<endl;
				string colors[5];
				for(int i=0;i<5;i++){
					cout<<"Color "<<i<<": ";cin>>colors[i];
				}
		   	   	Outfile<<"<style>body {animation: bganimation 5s ease infinite }@keyframes bganimation{ 20%{ background-color:"<<colors[0]<<";} 40%{ background-color:"<<colors[1]<<";} 60%{ background-color:"<<colors[2]<<";} 80%{ background-color:"<<colors[3]<<";} 100%{ background-color:"<<colors[4]<<";}}</style>"<<endl;
	}
}
int main(){
	fileOpener();
	
	cout<<"\t \t\t-----Website manuplative code by Astawus------"<<endl;
	cout<<"this code is connected to a file named webByCplus and is going to manupulate some features of it"<<endl;
	cout<<endl;
	cout<<"----you can use this to create your website easly and inhance the existing by adding some features--"<<endl;
	cout<<endl;
	int choise; 
	do{
		cout<<endl;
	cout<<"What feature Do You Want To Add? chose corrsponding no(1-7)"<<endl;
	cout<<"1. Static Text "<<endl;
	cout<<"2. Animated elements "<<endl;//doing this to check can this possibly go further 
	cout<<"3. Exite "<<endl;
	
	
	cout<<"choise: ";cin>>choise;
	switch(choise){
		case 1: AddText(); 
			textCounter++;
		break;
		case 2: Animation();
	}
	}while(choise!=3);
	
	return 0;
}
