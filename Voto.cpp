int main()
{
	int age;
	cout <<"Sua Idade:";
	cin >> age;
	
	if(age<16)
		cout <<"Não Pode Votar." << endl;
	else
		if(age<18)
			cout<<"Voto Facultativo." << endl;
		else
			if(age<65)
				cout<<"É Obrigador a votar:" << endl;
			else
				cout<< "Voto Facultativo." << endl;
	Return 0;
}
