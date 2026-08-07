#include <cmath>
#include <stdexcept>

template<typename P>
auto PrintMessageToConsole(P* p) -> decltype(p);

template<typename T, typename D>

class Maths {

public:

	T getAddNumbers(T number_1, T number_2) const {

		return number_1 + number_2;
	}


	T getSubNumbers(T number_1, T number_2) const {

		return number_1 - number_2;
	}



	T getMulNumbers(T number_1, T number_2) const {

		return number_1 * number_2;
	}



	T getDivNumbers(T number_1, T number_2) const {

		try 
		{

			if (number_2 == 0) {
				
				std::cout << PrintMessageToConsole("Divide by Zero");
				break;

			}

		}
		catch (runtime_error& e) {
			
		}
		
		return number_1 / number_2;
	}

private:

	D a, b;
};

template<typename P>
inline auto PrintMessageToConsole(P* p) -> decltype(p)
{
	return p;
}
