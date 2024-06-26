#include <iostream>
#include <string>
#include <fstream>
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
		loadData();
	}	
	void addCandidate();
	void editCandidate();	
	void searchCandidate(string id);
	void searchCandidateB(string id);
	void deleteCandidate();
	void dropCandidate();
	void displayAllCandidates();

	void registerVoter();
	void editVoter();
	void searchVoter(string id);
	void searchVoterB(string id);
	void deleteVoter();
	void displayAllVoters();
	
	void displayCastedVoters();

	void startVoting();
	void voting();

	void signUp();
	int login();

	void Result();
	void saveData();
	void loadData();

	void sortC();
	void sortV();

	void similaritySearch(string firstname);
};
#include <conio.h>
void main()
{
	ManagerAccess m1;
	int loggedIn = 0, attempts, option;
	int retryLvl1 = 1, retryLvl2 = 1, retryLvl3 = 1;
	string logInID, logInP;
	string id, name;
	
	
	while (retryLvl1 == 1)
	{
		retryLvl2 = retryLvl3 = 1;
		while (loggedIn == 0)
		{
			cout << "Enter the admin username and password\n";
			attempts = m1.login();
			if (attempts == 0)
			{
				system("cls");
				cout << "Too many attempts. Terminating...\n";
				loggedIn = -1;
				retryLvl1 = retryLvl2 = retryLvl3 = 0;
				system("pause");
			}
			else
			{
				loggedIn = 1;
			}
			system("cls");
		}

		if (votingDone == 0)
		{
			while (retryLvl2 == 1)
			{
				retryLvl3 = 1;
				system("cls");
				cout << "1. Candidate Options\n";
				cout << "2. Voter Options\n";
				cout << "3. Start Voting\n";
				cout << "4. Manager Control\n";
				cout << "5. Log out\n";
				cout << "6. Save\n";
				cout << "7. Exit\n";
				cout << "Choose an option: ";
				cin >> option;
				system("cls");
				switch (option)
				{
				case 1:
				{
					while (retryLvl3 == 1)
					{
						system("cls");
						cout << "1. Add new Candidate\n";
						cout << "2. Edit an existing Candidate\n";
						cout << "3. Search a Candidate\n";
						cout << "4. Similarity Search\n";
						cout << "5. Delete a Candidate\n";
						cout << "6. Drop a Candidate\n";
						cout << "7. Display all Candidate\n";
						cout << "8. Go Back\n";
						cout << "Choose an option: ";
						cin >> option;
						system("cls");
						switch (option)
						{
						case 1:
							m1.addCandidate();
							break;
						case 2:
							m1.editCandidate();
							break;
						case 3:
							cout << "Enter the Candidate ID to search: ";
							cin >> id;
							m1.searchCandidateB(id);
							break;
						case 4:
							cout << "Enter the Candidate's first name to search: ";
							cin >> name;
							m1.sortC();
							m1.similaritySearch(name);
							break;
						case 5:
							m1.deleteCandidate();
							break;
						case 6:
							m1.dropCandidate();
							break;
						case 7:
							m1.displayAllCandidates();
							break;
						case 8:
							retryLvl3 = 0;
							break;
						default:
							cout << "Invalid input. Try again\n";
						}
					}
					break;
				}
				case 2:
				{
					while (retryLvl3 == 1)
					{
						system("cls");
						cout << "1. Add new Voter\n";
						cout << "2. Edit an existing Voter\n";
						cout << "3. Search a Voter\n";
						cout << "4. Sort the Voter List\n";
						cout << "5. Delete a Voter\n";
						cout << "6. Display all Voters\n";
						cout << "7. Go Back\n";
						cout << "Choose an option: ";
						cin >> option;
						system("cls");
						switch (option)
						{
						case 1:
							m1.registerVoter();
							break;
						case 2:
							m1.editVoter();
							break;
						case 3:
							cout << "Enter the Voter ID to search: ";
							cin >> id;
							m1.searchVoterB(id);
							break;
						case 4:
							m1.sortV();
							break;
						case 5:
							m1.deleteVoter();
							break;
						case 6:
							m1.displayAllVoters();
							break;
						case 7:
							retryLvl3 = 0;
							break;
						default:
							cout << "Invalid input. Try again\n";
						}
					}
					break;
				}
				case 3:
				{
					m1.startVoting();
					retryLvl2 = 0;
					break;
				}
				case 4:
				{
					m1.signUp();
					loggedIn = 0;
					retryLvl2 = 0;

					break;
				}
				case 5:
				{
					loggedIn = 0;
					retryLvl2 = 0;
					break;
				}
				case 6:
				{
					m1.saveData();
				
					break;
				}
				case 7:
					retryLvl1 = 0;
					retryLvl2 = 0;
					break;
				default:
					cout << "Invalid input. Try again\n";
				}
			}
		}
		else
		{
			while (retryLvl2 == 1)
			{
				system("cls");
				cout << "1. Show Voting Result\n";
				cout << "2. Reset\n";
				cout << "3. Log out\n";
				cout << "4. Save\n";
				cout << "5. Exit\n";
				cout << "Choose an option: ";
				cin >> option;
				system("cls");
				switch (option)
				{
				case 1:
				{
					m1.Result();
					break;
				}
				case 2:
					retryLvl2 = 0;
					votingDone = 0;
					loggedIn = 0;
					break;
				case 3:
					loggedIn = 0;
					retryLvl2 = 0;
					break;
				case 4:
					m1.saveData();
					break;
				case 5:
					retryLvl2 = 0;
					retryLvl1 = 0;
					break;
				default:
					cout << "Invalid input. Try again\n";
				}
			}
		}
	}	
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
		found = 0;
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
		found = 0;
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











void ManagerAccess::editCandidate()
{
	int found = 0, option;
	string id;
	Candidate *temp;

	if (headC == NULL)
	{
		cout << "There are no candiddates in the list\n";
	}
	else
	{
		Candidate *current = headC;
		cout << "Enter candidate ID to edit: ";
		cin >> id;
		for (int i = 1; i <= candidateL; i++)
		{
			if (id == current->ID)
			{
				found = 1;
				int exit = 0;
				while (exit == 0)
				{
					searchCandidateB(id);
					cout << "\n\n";
					string tempS;
					int tempI;
					char tempC;
					exit = 1;
					cout << "What would you like to edit?!\n";
					cout << "1. First Name\n2. Last Name\n3. Gender\n";
					cout << "4. Age\n5. Qualification\n6. Address\n7. ID\n8. Symbol\n";
					cout << "Choose as option: ";
					cin >> option;
					switch (option)
					{
					case 1:
						cout << "Enter the first name: ";
						cin >> tempS;
						current->firstName = tempS;
						break;
					case 2:
						cout << "Enter the last name: ";
						cin >> tempS;
						current->lastName = tempS;
						break;
					case 3:
						while (1)
						{
							cout << "Enter Gender (M/F): ";
							cin >> tempC;
							if (tempC == 'm' || tempC == 'M' || tempC == 'f' || tempC == 'F')
							{
								break;
							}
							cout << "\n\n";
							cout << "Invalid input\n";
						}
						current->gender = tempC;
						break;
					case 4:
						while (1)
						{
							cout << "Enter Age: ";
							cin >> tempI;
							if (tempI > 20)
							{
								break;
							}
							cout << "Candidate's age Must be greater than 20\n";
						}
						current->age = tempI;
						break;
					case 5:
						cout << "Enter qualification: ";
						cin >> tempS;
						current->qualification = tempS;
						break;
					case 6:
						cout << "Enter address: ";
						cin >> tempS;
						current->address = tempS;
						break;
					case 7:
						cout << "Enter ID: ";
						cin >> tempS;
						id = tempS;
						while (1)
						{
							found = 0;
							temp = headC;
							for (int i = 1; i <= candidateL; i++)
							{
								if (temp->ID == tempS)
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
							cin >> tempS;
						}
						current->ID = tempS;
						break;
					case 8:
						cout << "Enter the sysmbolic character you would like to have: ";
						cin >> tempC;
						while (1)
						{
							temp = headC;
							for (int i = 1; i <= candidateL; i++)
							{
								if (temp->SYMBOLIC_char == tempC)
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
							cin >> tempC;
						}
						break;
					default:
						system("cls");
						cout << "Invalid choice. Try again\n";
						exit = 0;
					}
				}
				break;
			}
			if (current->next == NULL)
			{
				break;
			}
			current = current->next;
		}
		if (found == 0)
		{
			system("cls");
			cout << "There is no candidate for the given ID\n";
		}
		searchCandidateB(id);
	}
}











void ManagerAccess::searchCandidate(string id)
{
	system("cls");
	int found = 0;
	if (headC == NULL)
	{
		cout << "There are no candidates in the list\n";
	}
	else
	{
		Candidate *current = headC;
		for (int i = 1; i <= candidateL; i++)
		{
			if (id == current->ID)
			{
				found = 1;
				cout << "Candidate found\n";
				cout << "Name: " << current->firstName << " " << current->lastName << endl;
				cout << "ID: " << current->ID << endl;
				cout << "Symbol: " << current->SYMBOLIC_char << endl;
				if (current->gender == 'm' || current->gender == 'M')
				{
					cout << "Gender: Male\n";
				}
				else
				{
					cout << "Gender: Female\n";
				}
				cout << "Age: " << current->age << endl;
				cout << "Qualification: " << current->qualification << endl;
				cout << "Address: " << current->address << endl;
				break;
			}
			if (current->next == NULL)
			{
				break;
			}
			current = current->next;
		}
		if (found == 0)
		{
			system("cls");
			cout << "There is no voter for the given ID\n";
		}
	}
	system("pause");
}










void ManagerAccess::deleteCandidate()
{
	int found = 0;
	string id;
	if (headC == NULL)
	{
		cout << "The list is already empty\n";
	}
	else
	{
		Candidate *current = headC, *temp = current;
		cout << "Enter candidate ID to Delete: ";
		cin >> id;
		for (int i = 1; i <= candidateL; i++)
		{
			if (id == current->ID)
			{
				found = 1;
				if (current == headC)
				{
					headC = current->next;
					delete current;
				}
				else
				{
					temp->next = current->next;
					delete current;
				}
				candidateL--;
				break;
			}
			temp = current;
			current = current->next;
		}
		if (found == 0)
		{
			cout << "There is no candidate with the given ID\n";
		}
	}
}










void ManagerAccess::displayAllCandidates()
{
	system("cls");
	Candidate *current = headC;
	if (headC == NULL)
	{
		cout << "There are no candidates\n";
	}
	else
	{
		cout << "Total number of candidates are: " << candidateL << "\n\n";
		for (int i = 1; i <= candidateL; i++)
		{
			cout << i << ".\n  Name: " << current->firstName << " ";
			cout << current->lastName << endl;
			cout << "  ID: " << current->ID << endl;
			if (current->gender == 'm' || current->gender == 'M')
			{
				cout << "  Gender: Male\n";
			}
			else
			{
				cout << "  Gender: Female\n";
			}
			cout << "  Age: " << current->age << endl;
			cout << "  Qualification: " << current->qualification << endl;
			cout << "  Address: " << current->address << endl;
			cout << "  Symbol: " << current->SYMBOLIC_char << endl;
			if (current->next == NULL)
			{
				break;
			}
			current = current->next;
		}
	}
	system("pause");
}










void ManagerAccess::registerVoter()
{
	Voter *current = headV;
	string N, id;
	int A, V, found = 0;
	system("cls");
	cout << "Enter name: ";
	cin >> N;
	system("cls");
	cout << "Enter the ID: ";
	cin >> id;
	for (int i = 1; i <= voterL; i++)
	{
		current = headV;
		found = 0;
		for (int i = 1; i <= voterL; i++)
		{
			if (id == current->ID)
			{
				found = 1;
				break;
			}
			if (current->next == NULL)
			{
				break;
			}
			current = current->next;
		}
		if (found == 0)
		{
			break;
		}
		system("cls");
		cout << "ID already exists\n";
		cout << "Enter the ID again: ";
		cin >> id;
	}
	system("cls");
	while (1)
	{
		cout << "Enter age: ";
		cin >> A;
		if (A >= 18)
		{
			break;
		}
		system("cls");
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










void ManagerAccess::editVoter()
{
	int found = 0, option;
	string id;
	if (headV == NULL)
	{
		cout << "There are no voters in the list\n";
	}
	else
	{
		Voter *current = headV;
		cout << "Enter voter ID to edit: ";
		cin >> id;
		for (int i = 1; i <= voterL; i++)
		{
			if (id == current->ID)
			{
				found = 1;
				system("cls");
				int exit = 0;
				while (exit == 0)
				{
					string tempS;
					int tempI;
					exit = 1;
					cout << "What would you like to edit?!\n";
					cout << "1. Name\n2. ID\n3. Age\n";
					cout << "Choose as option: ";
					cin >> option;
					switch (option)
					{
					case 1:
						system("cls");
						cout << "Enter the name: ";
						cin >> tempS;
						current->name = tempS;
						break;
					case 2:
						system("cls");
						cout << "Enter the ID: ";
						cin >> tempS;
						current->ID = tempS;
						break;
					case 3:
						system("cls");
						while (1)
						{
							cout << "Enter Age: ";
							cin >> tempI;
							if (tempI >= 18)
							{
								break;
							}
							system("cls");
							cout << "Voter's age Must be greater than 17\n";
						}
						current->age = tempI;
						break;
					default:
						system("cls");
						cout << "Invalid choice. Try again\n";
						exit = 0;
					}
				}
				break;
			}
			if (current->next == NULL)
			{
				break;
			}
			current = current->next;
		}
		if (found == 0)
		{
			system("cls");
			cout << "There is no candidate for the given ID\n";
		}
	}

}










void ManagerAccess::searchVoter(string id)
{
	system("cls");
	int found = 0;
	if (headV == NULL)
	{
		cout << "There are no registered voters in the list\n";
	}
	else
	{
		Voter *current = headV;
		for (int i = 1; i <= voterL; i++)
		{
			if (id == current->ID)
			{
				found = 1;
				cout << "Voter Found\n";
				cout << "Name: " << current->name << endl;
				cout << "ID: " << current->ID << endl;
				cout << "Age: " << current->age << endl;
				break;
			}
			if (current->next == NULL)
			{
				break;
			}
			current = current->next;
		}
		if (found == 0)
		{
			system("cls");
			cout << "There is no voter for the given ID\n";
		}
	}
	system("pause");
}










void ManagerAccess::deleteVoter()
{
	int found = 0;
	string id;
	if (headV == NULL)
	{
		cout << "The list is already empty\n";
	}
	else
	{
		Voter *current = headV, *temp = current;
		cout << "Enter voter ID to Delete: ";
		cin >> id;
		for (int i = 1; i <= voterL; i++)
		{
			if (id == current->ID)
			{
				found = 1;
				if (current == headV)
				{
					headV = current->next;
					delete current;
				}
				else
				{
					temp->next = current->next;
					delete current;
				}
				voterL--;
				break;
			}
			temp = current;
			current = current->next;
		}
		if (found == 0)
		{
			cout << "There is no voter with the given ID\n";
		}
	}
}










void ManagerAccess::displayAllVoters()
{
	system("cls");
	Voter *current = headV;
	if (headV == NULL)
	{
		cout << "There are no registered voters\n";
	}
	else
	{
		cout << "Total number of voters are: " << voterL << "\n\n";
		for (int i = 1; i <= voterL; i++)
		{
			cout << i << ".\n  Name: " << current->name << endl;
			cout << "  ID: " << current->ID << endl;
			cout << "  Age: " << current->age << endl;
			if (current->next == NULL)
			{
				break;
			}
			current = current->next;
		}
	}
	system("pause");
}











void ManagerAccess::displayCastedVoters()
{
	Voter *current = headV;
	if (headV == NULL)
	{
		cout << "There are no registered voters\n";
	}
	else
	{
		for (int i = 1; i <= voterL; i++)
		{
			if (current->vote == 1)
			{
				cout << i << ".\n  Voter Name: " << current->name << endl;
				cout << "  ID: " << current->ID << endl;
				cout << "  Age: " << current->age << endl;
			}
			if (current->next == NULL)
			{
				break;
			}
			current = current->next;
		}
	}
}










void ManagerAccess::startVoting()
{
	int option, retry = 1, voterLeft;
	Voter *current;
	system("cls");
	if (headV == NULL)
	{
		cout << "Voter list is empty\n";
		system("pause");
	}
	else if (headC == NULL)
	{
		cout << "Candidate list is empty\n";
		system("pause");
	}
	else
	{
		while (retry == 1)
		{
			cout << "1. Vote\n2. Stop Voting\n";
			cout << "Choose an option: ";
			cin >> option;
			system("cls");
			switch (option)
			{
			case 1:
				voting();
				system("cls");
				break;
			case 2:
				system("cls");
				retry = 0;
				votingDone = 1;
				break;
			default:
				system("cls");
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
	votingDone = 1;
}










void ManagerAccess::voting()
{
	int found = 0, alreadyExists = 0;
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
				if (currentV->vote == 1)
				{
					alreadyExists = 1;
					break;
				}
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
		else if (alreadyExists == 1)
		{
			system("cls");
			cout << "The entered voter has already casted their vote\n";
		}
		else
		{
			break;
		}
		cout << "Enter the Voter ID again: ";
		cin >> idV;
	}

	found = 0;
	cout << "Following are all the candidates:\n";
	displayAllCandidates();
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










void ManagerAccess::signUp()
{
	system("cls");
	string mP;
	int option;
	cout << "Enter the admin password: ";
	cin >> mP;
	system("cls");
	if (mP == managerPass)
	{
		cout << "1. ID\n";
		cout << "2. Password\n";
		cout << "What would you like to modify: ";
		cin >> option;
		system("cls");
		switch (option)
		{
		case 1:
			cout << "Enter the manager ID: ";
			cin >> managerID;
			cout << "ID has been changed. You will have to re-login\n";
			break;
		case 2:
			while (1)
			{
				cout << "Enter the Password: ";
				cin >> managerPass;
				if (managerPass.size() > 3)
				{
					break;
				}
				system("cls");
				cout << "Password must have more than 3 letters\n";
			}
			cout << "Password has been changed. You will have to re-login\n";
			break;
		default:
			cout << "Invalid input\n";
		}
	}
	else
	{
		cout << "Incorrect password\n";
	}
	system("pause");
}











int ManagerAccess::login()
{
	int check, attempts = 3;
	string mID, mP;
	char retry;
	for (check = 1; check <= 3; check++)
	{
		system("cls");
		cout << attempts << " attempts left\n";
		cout << "Enter manager ID: ";
		cin >> mID;
		cout << "Enter Password: ";
		cin >> mP;
		if (managerID == mID && managerPass == mP)
		{
			return -1;
		}
		else
		{
			attempts--;
		}
		if (attempts == 0)
		{
			break;
		}
		system("cls");
		cout << "ID or Password do not match\n";
		cout << "Press 'Y' to try again?: ";
		cin >> retry;
		if (retry != 'y' && retry != 'Y')
		{
			break;
		}
	}
	return attempts;
}











void ManagerAccess::Result()
{
	system("cls");
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
	system("pause");
}










void ManagerAccess::saveData()
{
	Candidate *currentC = headC;
	Voter *currentV = headV;

	ofstream newFile;

	newFile.open("AdminInfo.txt", ios::trunc);
	newFile << managerID << endl;
	newFile << managerPass << endl;
	newFile.close();

	newFile.open("CandidateInfo.txt", ios::trunc);
	for (int i = 1; i <= candidateL; i++)
	{
		newFile << currentC->SYMBOLIC_char << endl;
		newFile << currentC->ID << endl;
		newFile << currentC->firstName << endl;
		newFile << currentC->lastName << endl;
		newFile << currentC->gender << endl;
		newFile << currentC->age << endl;
		newFile << currentC->qualification << endl;
		newFile << currentC->address << endl;
		newFile << currentC->votes << endl;
		if (currentC->next == NULL)
		{
			break;
		}
		currentC = currentC->next;
	}
	newFile.close();

	newFile.open("VoterInfo.txt", ios::trunc);
	for (int i = 1; i <= voterL; i++)
	{
		newFile << currentV->ID << endl;
		newFile << currentV->name << endl;
		newFile << currentV->age << endl;
		newFile << currentV->vote << endl;
		if (currentV->next == NULL)
		{
			break;
		}
		currentV = currentV->next;
	}
	newFile.close();

	newFile.open("List.txt", ios::trunc);
	newFile << candidateL << endl;
	newFile << voterL << endl;
	newFile << votingDone << endl;
	newFile.close();
}










void ManagerAccess::loadData()
{
	Candidate *tempNodeC = new Candidate;
	Voter *tempNodeV = new Voter;

	bool first = 1;

	ifstream file;

	file.open("AdminInfo.txt");
	if (file.is_open())
	{
		while (!file.eof())
		{
			file >> managerID;
			file >> managerPass;
		}
	}
	else
	{
		cout << "Unable to read admin file\n";
	}
	file.close();

	file.open("CandidateInfo.txt");
	if (file.is_open())
	{
		while (!file.eof())
		{
			Candidate *tempNodeC = new Candidate;
			file >> tempNodeC->SYMBOLIC_char;
			file >> tempNodeC->ID;
			file >> tempNodeC->firstName ;
			file >> tempNodeC->lastName;
			file >> tempNodeC->gender ;
			file >> tempNodeC->age ;
			file >> tempNodeC->qualification;
			file >> tempNodeC->address;
			file >> tempNodeC->votes;
			if (tempNodeC->votes >= 0)
			{
				tempNodeC->next == NULL;
				if (first == 1)
				{
					headC = tempNodeC;
					lastC = tempNodeC;
					first = 0;
				}
				else
				{
					lastC->next = tempNodeC;
					lastC = tempNodeC;
				}
			}
		}
	}
	else
	{
		cout << "Unable to read candidate file\n";
	}
	file.close();
	first = 1;

	file.open("VoterInfo.txt");
	if (file.is_open())
	{
		while (!file.eof())
		{
			Voter *tempNodeV = new Voter;
			file >> tempNodeV->ID;
			file >> tempNodeV->name;
			file >> tempNodeV->age;
			file >> tempNodeV->vote;
			if (tempNodeV->vote == 0 || tempNodeV->vote == 1)
			{
				tempNodeV->next == NULL;
				if (first == 1)
				{
					headV = tempNodeV;
					lastV = tempNodeV;
					first = 0;
				}
				else
				{
					lastV->next = tempNodeV;
					lastV = tempNodeV;
				}
				lastV->next == NULL;
			}
		}
	}
	else
	{
		cout << "Unable to read voter file\n";
	}
	file.close();

	file.open("List.txt");
	if (file.is_open())
	{
		while (!file.eof())
		{
			file >> candidateL;
			file >> voterL;
			file >> votingDone;
		}
	}
	else
	{
		cout << "Unable to read list file\n";
	}
	file.close();
}










void ManagerAccess::sortC()
{
	Candidate *tempP = headC;
	Candidate *prevC = headC, *currentPC = headC;
	Candidate *nextC = headC->next, *currentNC = headC->next;

	if (candidateL >= 2)
	{
		for (int i = 1; i < candidateL; i++)
		{
			for (int j = 1; j < candidateL; j++)
			{
				if (prevC->firstName > nextC->firstName)
				{
					if (currentPC == headC)
					{
						headC = nextC;
						prevC->next = currentNC->next;
						nextC->next = currentPC;
						tempP = currentPC;
					}
					else if (currentNC == lastC)
					{
						tempP->next = currentNC;
						nextC->next = currentPC;
					}
					else
					{
						tempP->next = currentPC;
						prevC->next = currentNC->next;
						nextC->next = currentPC;
						
					}
				}
				tempP = currentPC;
				currentPC = currentPC->next;
				currentNC = currentNC->next;
				prevC = currentPC;
				nextC = currentNC;
			}
			if (currentPC == lastC)
			{
				break;
			}
		}
	}
	else
	{
		cout << "The list is too small to sort\n";
	}


}








void ManagerAccess::sortV()
{
	Voter *tempP = headV;
	Voter *prevV = headV, *currentPV = headV;
	Voter *nextV = headV->next, *currentNV = headV->next;

	if (candidateL >= 2)
	{
		for (int i = 1; i < voterL; i++)
		{
			for (int j = 1; j < voterL; j++)
			{
				if (prevV->name > nextV->name)
				{
					if (currentPV == headV)
					{
						headV = nextV;
						prevV->next = currentNV->next;
						nextV->next = currentPV;
						tempP = currentPV;
					}
					else if (currentNV == lastV)
					{
						tempP->next = currentNV;
						nextV->next = currentPV;
					}
					else
					{
						tempP->next = currentPV;
						prevV->next = currentNV->next;
						nextV->next = currentPV;

					}
				}
				tempP = currentPV;
				currentPV = currentPV->next;
				currentNV = currentNV->next;
				prevV = currentPV;
				nextV = currentNV;
			}
			if (currentPV == lastV)
			{
				break;
			}
		}
	}
	else
	{
		cout << "The list is too small to sort\n";
	}


}








void ManagerAccess::searchCandidateB(string id)
{
	system("cls");
	Candidate *current = headC;
	int found = 0;
	int mid = candidateL / 2, first = 1, last = candidateL;

	while (first <= last)
	{
		current = headC;
		for (int i = 1; i < mid; i++)
		{
			current = current->next;
		}
		if (current->ID == id)
		{
			cout << "Candidate found\n";
			cout << "Name: " << current->firstName << " " << current->lastName << endl;
			cout << "ID: " << current->ID << endl;
			cout << "Symbol: " << current->SYMBOLIC_char << endl;
			if (current->gender == 'm' || current->gender == 'M')
			{
				cout << "Gender: Male\n";
			}
			else
			{
				cout << "Gender: Female\n";
			}
			cout << "Age: " << current->age << endl;
			cout << "Qualification: " << current->qualification << endl;
			cout << "Address: " << current->address << endl;
			found = 1;
			break;
		}
		else if (current->ID > id)
		{
			last = mid - 1;
		}
		else if (current->ID < id)
		{
			first = mid + 1;
		}
		mid = (first + last) / 2;
	}
	if (found == 0)
	{
		cout << "ID not found\n";
	}
	system("pause");
}





void ManagerAccess::searchVoterB(string id)
{
	system("cls");
	Voter *current = headV;
	int found = 0;
	int mid = voterL / 2, first = 1, last = voterL;

	while (first <= last)
	{
		current = headV;
		for (int i = 1; i < mid; i++)
		{
			current = current->next;
		}
		if (current->name == id)
		{
			cout << "Name: " << current->name << endl;
			cout << "ID: " << current->ID << endl;
			cout << "Age: " << current->age << endl;
			found = 1;
			break;
		}
		else if (current->ID > id)
		{
			last = mid - 1;
		}
		else if (current->ID < id)
		{
			first = mid + 1;
		}
		mid = (first + last) / 2;
	}
	if (found == 0)
	{
		cout << "ID not found\n";
	}
	system("pause");
}







void ManagerAccess::similaritySearch(string firstname)
{
	system("cls");
	int found = 0;
	if (headC == NULL)
	{
		cout << "There are no candidates in the list\n";
	}
	else
	{
		Candidate *current = headC;
		for (int i = 1; i <= candidateL; i++)
		{
			if (firstname == current->firstName)
			{
				found = 1;
				cout << "Name: " << current->firstName << " " << current->lastName << endl;
			}
			if (current->next == NULL)
			{
				break;
			}
			current = current->next;
		}
		if (found == 0)
		{
			system("cls");
			cout << "There is no voter for the given ID\n";
		}
	}
	system("pause");
}







void ManagerAccess::dropCandidate()
{
	char corrupt;
	cout << "Does the candidate have any corruption charges?(Y/N): ";
	cin >> corrupt;
	if (corrupt == 'y' || corrupt == 'Y')
	{
		string id;
		system("cls");
		cout << "Enter the ID of the candidate with corruption charges: \n";
		cin >> id;
		Candidate *current = headC;

		for (int i = 1; i <= candidateL; i++)
		{
			if (current->ID == id)
			{
				delete current;
			}
		}
	}
}