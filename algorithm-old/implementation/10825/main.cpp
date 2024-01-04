#include <iostream>
#include <vector>
#include <algorithm>

struct student{
	std::string name;
	int korean, english, math;
};

int n;
std::vector<student> student_info;

bool cmp(student stu1, student stu2)
{
	if (stu1.korean == stu2.korean && stu1.english == stu2.english && stu1.math == stu2.math)
		return (stu1.name < stu2.name);
	if (stu1.korean == stu2.korean && stu1.english == stu2.english)
		return (stu1.math > stu2.math);
	if (stu1.korean == stu2.korean)
		return (stu1.english < stu2.english);
	return (stu1.korean > stu2.korean);
}

void input_setting()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
}

void input()
{
	std::cin >> n;
	student_info.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> student_info[i].name >> student_info[i].korean >> student_info[i].english >> student_info[i].math;
}

void solution()
{
	std::sort(student_info.begin(), student_info.end(), cmp);
}

void print()
{
	for (int i = 0; i < n; i++)
		std::cout << student_info[i].name << "\n";
}

int main(void)
{
	input_setting();
	input();
	solution();
	print();
	return (0);
}
