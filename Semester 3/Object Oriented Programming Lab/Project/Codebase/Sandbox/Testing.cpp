#include <iostream>
#include <string>
using namespace std;
bool votingDone = 0;
struct Candidate
{
	string firstName, lastName;
	char gender, SYMBOLIC_char;
	int age;
	string qualification, address, ID;
	int votes;
	Candidate *next;
};
struct Voter
{
	string name, ID;
	int age, vote;
	Voter *next;
};
class ManagerAccess
{
	Candidate *headC, *lastC;
	Voter *headV, *lastV;
	int candidateL, voterL;
	string managerID, managerPass;
public:
	ManagerAccess()
	{
		headC = lastC = NULL;
		candidateL = 0;
		voterL = 0;
		managerID = managerPass = " ";
	}
	void addCandidate();
	void registerVoter();
	void startVoting();
	void voting();
	void Result();
};










void main()
{
	ManagerAccess m1;
	m1.addCandidate();
	m1.addCandidate();
	m1.addCandidate();
	m1.registerVoter();
	m1.registerVoter();
	m1.registerVoter();
	m1.registerVoter();
	m1.voting();
	m1.Result();
}










void ManagerAccess::addCandidate()
{
	string firstN, lastN, Q, Ad, id;
	char G, S_C;
	int Ag, found = 0;
	Candidate *temp;

	system("cls");

	cout << "Enter First Name: ";
	cin >> firstN;

	system("cls");

	cout << "Enter Last Name: ";
	cin >> lastN;

	system("cls");

	while (1)
	{
		cout << "Enter Gender (M/F): ";
		cin >> G;
		if (G == 'm' || G == 'M' || G == 'f' || G == 'F')
		{
			break;
		}
		system("cls");
		cout << "Invalid input\n";
	}
	while (1)
	{
		cout << "Enter Age: ";
		cin >> Ag;
		if (Ag > 20)
		{
			break;
		}
		system("cls");
		cout << "Candidate's age Must be greater than 20\n";
	}

	system("cls");

	cout << "Enter Qualification: ";
	cin >> Q;

	system("cls");

	cout << "Enter Address: ";
	cin >> Ad;

	system("cls");

	cout << "Enter ID: ";
	cin >> id;
	while (1)
	{
		temp = headC;
		for (int i = 1; i <= candidateL; i++)
		{
			if (temp->ID == id)
			{
				found = 1;
				break;
			}
			if (temp->next == NULL)
			{
				break;
			}
			temp = temp->next;
		}
		if (found == 0)
		{
			break;
		}
		cout << "ID already exists. Try again\n";
		cout << "Enter another ID: ";
		cin >> id;
	}


	system("cls");

	cout << "Enter the sysmbolic character you would like to have: ";
	cin >> S_C;
	while (1)
	{
		temp = headC;
		for (int i = 1; i <= candidateL; i++)
		{
			if (temp->SYMBOLIC_char == S_C)
			{
				found = 1;
				break;
			}
			if (temp->next == NULL)
			{
				break;
			}
			temp = temp->next;
		}
		if (found == 0)
		{
			break;
		}
		cout << "Symbol already chosen. Try again\n";
		cout << "Enter another sysmbolic character you would like to have: ";
		cin >> S_C;
	}

	system("cls");

	Candidate *newCandidate = new Candidate;
	if (headC == NULL)
	{
		headC = newCandidate;
		lastC = newCandidate;
		newCandidate->firstName = firstN;
		newCandidate->lastName = lastN;
		newCandidate->gender = G;
		newCandidate->age = Ag;
		newCandidate->qualification = Q;
		newCandidate->address = Ad;
		newCandidate->ID = id;
		newCandidate->SYMBOLIC_char = S_C;
		newCandidate->votes = 0;
		newCandidate->next = NULL;
	}
	else
	{
		lastC->next = newCandidate;
		lastC = newCandidate;
		newCandidate->firstName = firstN;
		newCandidate->lastName = lastN;
		newCandidate->gender = G;
		newCandidate->age = Ag;
		newCandidate->qualification = Q;
		newCandidate->address = Ad;
		newCandidate->ID = id;
		newCandidate->SYMBOLIC_char = S_C;
		newCandidate->votes = 0;
		newCandidate->next = NULL;
	}
	candidateL++;
}










void ManagerAccess::registerVoter()
{
	string N, id;
	int A, V;
	system("cls");
	cout << "Enter name: ";
	cin >> N;
	cout << "Enter ID: ";
	cin >> id;
	while (1)
	{
		cout << "Enter age: ";
		cin >> A;
		if (A >= 18)
		{
			break;
		}
		cout << "Age must be greater than 17\n";
	}
	Voter *newVoter = new Voter;
	if (headV == NULL)
	{
		headV = newVoter;
		lastV = newVoter;
		newVoter->name = N;
		newVoter->ID = id;
		newVoter->age = A;
		newVoter->vote = 0;
		newVoter->next = NULL;
	}
	else
	{
		lastV->next = newVoter;
		lastV = newVoter;
		newVoter->name = N;
		newVoter->ID = id;
		newVoter->age = A;
		newVoter->vote = 0;
		newVoter->next = NULL;
	}
	voterL++;
}











void ManagerAccess::startVoting()
{
	int option, retry = 1, voterLeft;
	Voter *current;
	if (headV == NULL)
	{
		cout << "Voter list is empty\n";
	}
	else if (headC == NULL)
	{
		cout << "Candidate list is empty\n";
	}
	else
	{
		while (retry == 1)
		{
			cout << "1. Vote\n2. Stop Voting\n";
			cin >> option;
			switch (option)
			{
			case 1:
				voting();
				break;
			case 2:
				retry = 0;
				votingDone = 1;
				break;
			default:
				cout << "Invalid input. Try again\n";
			}

			voterLeft = 0;
			current = headV;
			for (int i = 1; i <= voterL; i++)
			{
				if (current->vote == 0)
				{
					voterLeft = 1;
					break;
				}
				if (current->next == NULL)
				{
					break;
				}
				current = current->next;
			}
			if (voterLeft == 0)
			{
				system("cls");
				cout << "All registered voters have voted. Voting has been ended\n";
				votingDone = 1;
				retry = 0;
				system("pause");
				retry = 0;
			}
		}
	}
	Result();
}










void ManagerAccess::voting()
{
	int found = 0;
	string idV, idC;
	Voter *currentV;
	Candidate *currentC;
	char S_C;

	cout << "Enter the Voter ID to Vote: ";
	cin >> idV;
	while (1)
	{
		currentV = headV;
		for (int i = 1; i <= voterL; i++)
		{
			if (idV == currentV->ID)
			{
				found = 1;
				break;
			}
			if (currentV->next == NULL)
			{
				break;
			}
			currentV = currentV->next;
		}
		if (found == 0)
		{
			system("cls");
			cout << "There is no voter for the given ID\n";
		}
		else
		{
			break;
		}
		cout << "Enter the Voter ID again: ";
		cin >> idV;
	}

	found = 0;
	//cout << "Following are all the candidates:\n";
	//displayAllCandidates();
	cout << "Choose a Candidate based on Their Symbol: ";
	cin >> S_C;
	while (1)
	{
		currentC = headC;
		for (int i = 1; i <= candidateL; i++)
		{
			if (currentC->SYMBOLIC_char == S_C)
			{
				found = 1;
				currentC->votes++;
				currentV->vote = 1;
				break;
			}
			if (currentC->next == NULL)
			{
				break;
			}
			currentC = currentC->next;
		}
		if (found == 0)
		{
			cout << "No candidate with such symbol exists\n";
			break;
		}
		else
		{
			break;
		}
	}

}









void ManagerAccess::Result()
{
	Candidate *current1 = headC, *current2 = headC;
	int max = current1->votes, winner1, winner2, draw = 0;
	for (int i = 1; i <= candidateL; i++)
	{
		if (current1->votes > max)
		{
			max = current1->votes;
			winner1 = i;
		}
		else if (current1->votes == max && current1 != headC)
		{
			winner2 = i;
			draw = 1;
		}
		else if (current1->votes == max)
		{
			winner1 = i;
		}
		if (current1->next == NULL)
		{
			break;
		}
		current1 = current1->next;
	}
	current1 = headC;
	if (draw == 0)
	{
		for (int i = 1; i < winner1; i++)
		{
			current1 = current1->next;
		}
		cout << "The winner of the voting is: " << current1->firstName << " " << current1->lastName << endl;
		cout << current1->firstName << " " << current1->lastName << " won with " << current1->votes << " votes\n";
	}
	else
	{
		cout << "There is a draw between the following candidates:\n";
		for (int i = 1; i < winner1; i++)
		{
			current1 = current1->next;
		}
		for (int i = 1; i < winner2; i++)
		{
			current2 = current2->next;
		}
		cout << current1->firstName << " " << current1->lastName << endl;
		cout << current2->firstName << " " << current2->lastName << endl;
	}
	cout << "\nThe voting result of all the candidates are:\n\n";
	for (int i = 1; i <= candidateL; i++)
	{
		cout << "Candidate Name: " << current1->firstName << " " << current1->lastName << endl;
		cout << "Candidate Symbol: " << current1->SYMBOLIC_char << endl;
		cout << "Votes Achieved: " << current1->votes << endl;
		current1 = current1->next;
	}
}