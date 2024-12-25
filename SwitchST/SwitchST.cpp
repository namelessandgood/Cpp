#include <iostream>

using namespace std;

int main()
{

	/**	switch (3)
		{
		case 1:// 1==3 false
			cout << "Case 1" << endl;
			break;

			if(3==1) true
			{
				cout << "Case 1" << endl;
			}

		case 2: // 2==3 false
			cout << "Case 2" << endl;
			break;
		case 3: // 3==3 true
			cout << "Case 3" << endl;
			break;
		case 4:
			cout << "Case 4" << endl;
			break;
		case 5:
			cout << "Case 5" << endl;
			break;
		default:
			cout << "Default case" << endl;
			break;
		}

	*/


	int day = 2;

	cout << "Enter the day(1-7) : ";

	// cin >> day;

	/*
	if (day == 1) {
	}
	else if (day == 2) {
	}
	else if (day == 3) {
	}
	else if (day == 4) {
	}
	else if (day == 5) {
	}
	else if (day == 6) {
	}
	else if (day == 7) {
	}
	else {
		cout << "invaild day";
	}
	*/

	switch (day)
	{
	case 1:
		cout << "Sunday" << endl;
		break;
	case 2:
		cout << "Monday" << endl;
		break;
	case 3:
		cout << "Tuesday" << endl;
		break;
	case 4:
		cout << "Wednesday" << endl;
		break;
	case 5:
		cout << "Thursday" << endl;
		break;
	case 6:
		cout << "Friday" << endl;
		break;
	case 7:
		cout << "Saturday" << endl;
		break;
	default:
		cout << "Invalid day" << endl;
		break;
	}

	int time = 0;
	cout << "Enter the time bt (0-23) : ";

	cin >> time;

	switch (time)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		cout << "Good Night" << endl;
		break;
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
		cout << "Good Morning" << endl;
		break;
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
		cout << "Good Afternoon" << endl;
		break;
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
		cout << "Good Evening" << endl;
		break;
	default:
		cout << "Invalid time" << endl;
		break;
	}

	return 0;
}
