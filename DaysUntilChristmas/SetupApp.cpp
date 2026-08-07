#include <iostream>
#include <algorithm>
#include "UserPrompt.cpp";
#include <string>
#include "Math.hpp"

static std::string strUpper(std::string value) {

	std::transform(value.begin(), value.end(), value.begin(), ::toupper);
	return value;
}

template<typename U>

U upperText(U textUpper) {

	return textUpper;
}

template<typename T>

T inputByUser(T textUpper) {

	return upperText(textUpper);
}

template<typename UserQuestion>
auto text(std::string text) -> decltype(text);



int main() {

	auto c_days = (int)0, b_month = (int)0, christmas_m = (int)0, christmas_d = (int) 0;
	std::cout << inputByUser(strUpper("Enter Christmas Day Number: ")) << "\n";
	auto inputDays = inputUser(christmas_d);

	std::cout << inputByUser(strUpper("Enter Current Day Number: ")) << "\n";
	auto currentDay = inputUser(c_days);

	std::cout << inputByUser(strUpper("Enter Christmas Month Number: ")) << "\n";
	auto christmasMonth = inputUser(christmas_m);

	std::cout << inputByUser(strUpper("Enter Current Month Number: ")) << "\n";
	auto currentMonth = inputUser(b_month);

	std::string inputOption;

	std::cin >> inputOption;

	if (inputOption == "ADD") {

		Maths<double, int> m{};
		double calcMonths = m.getAddNumbers(christmasMonth, currentMonth);
		double calcDays = m.getAddNumbers(inputDays, currentDay);

		std::string messageDays = std::to_string(calcDays);
		std::string messageMonths = std::to_string(calcMonths);
			
		std::cout << inputByUser(strUpper("You Will Have")) << messageMonths << " Months Until Chstimas" << "\n";
		std::cout << inputByUser(strUpper("You Will Have")) << messageDays << " Days Until Chstimas" << "\n";

	}

	if (inputOption == "SUB") {

		Maths<double, int> m{};
		double calcMonths = m.getSubNumbers(christmasMonth, currentMonth);
		double calcDays = m.getSubNumbers(inputDays, currentDay);

		std::string messageDays = std::to_string(calcDays);
		std::string messageMonths = std::to_string(calcMonths);

		std::cout << inputByUser(strUpper("You Will Have")) << messageMonths << " Months Until Chstimas" << "\n";
		std::cout << inputByUser(strUpper("You Will Have")) << messageDays << " Days Until Chstimas" << "\n";

	}

	if (inputOption == "MUL") {

		Maths<double, int> m{};

		double calcMonths = m.getSubNumbers(christmasMonth, currentMonth);
		double calcDays = m.getSubNumbers(inputDays, currentDay);

		std::string messageDays = std::to_string(calcDays);
		std::string messageMonths = std::to_string(calcMonths);

		std::cout << inputByUser(strUpper("You Will Have")) << messageMonths << " Months Until Chstimas" << "\n";
		std::cout << inputByUser(strUpper("You Will Have")) << messageDays << " Days Until Chstimas" << "\n";
	}


	if (inputOption == "DIV") {

		Maths<double, int> m{};

		double calcMonths = m.getSubNumbers(christmasMonth, currentMonth);
		double calcDays = m.getSubNumbers(inputDays, currentDay);

		std::string messageDays = std::to_string(calcDays);
		std::string messageMonths = std::to_string(calcMonths);

		std::cout << inputByUser(strUpper("You Will Have")) << messageMonths << " Months Until Chstimas" << "\n";
		std::cout << inputByUser(strUpper("You Will Have")) << messageDays << " Days Until Chstimas" << "\n";
	}

}

template<typename UserQuestion>
auto text(std::string text) -> decltype(text)
{
	return text;
}