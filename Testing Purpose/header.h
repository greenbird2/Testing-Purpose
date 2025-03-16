void ifelse() {

	int code;
	bool isLogin = true;


	std::cout << " Enter your code for login" << std::endl;
	std::cin >> code; std::cout << std::endl;
	if (code == 10000) {
		if (isLogin) {
			std::cout << "LORD MAGIC(VIP - MOD) ";
		}
	} 
	else {
		std::cout << "Please enter your code again!" << std::endl;
		std::cin >> code;
		std::cout << std::endl;
		if (code == 10000) {
			if (isLogin) {
				std::cout << "LORD MAGIC(VIP - MOD) ";
			}
		}
		else {
			std::cout << "Please enter your code again" << std::endl;
			std::cin >> code;
			std::cout << std::endl;
			if (code == 10000) {
				if (isLogin) {
					std::cout << "LORD MAGIC(VIP - MOD)";
				}
			}
			else {
				std::cout << "Please enter your code again" << std::endl;
				std::cin >> code;
				std::cout << std::endl;
				if (code == 10000) {
					if (isLogin) {
						std::cout << "LORD MAGIC(VIP - MOD) ";
					}
					
				}
			}
		}
	}



}