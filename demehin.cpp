#include <iostream>;

int main() {
	int matrix[3][4] = {
		{1, 2, 3, 4},
		{23, 24, 25, 26},
		{5, 6, 7, 8}
	};
	for (int i = 0; i < 3; i += 1) {
		for (int j = 0; j < 4; j += 1) {
			if (j == 3) {
				std::cout << matrix[i][j]; // без пробела после последнего числа в строке
			}
			else {
				std::cout << matrix[i][j] << " ";
			}
		}
		std::cout << std::endl;
	}
	std::cout << "------------------ \n"; // разделитель пунктов задания

	for (int i = 0; i < 4; i += 1) {
		for (int j = 0; j < 3; j += 1) {
			if (j == 2) {
				std::cout << matrix[j][i]; // без пробела после последнего числа в строке
			}
			else {
				std::cout << matrix[j][i] << " ";
			}
	
		}
		std::cout << std::endl;
	}
	return 0;
}