int main()
{
	int age;
	cout <<"Sua Idade:";
	cin >> age;
	
	if(age<16)
		cout <<"N�o Pode Votar." << endl;
	else
		if(age<18)
			cout<<"Voto Facultativo." << endl;
		else
			if(age<65)
				cout<<"� Obrigador a votar:" << endl;
			else
				cout<< "Voto Facultativo." << endl;
	Return 0;
}
