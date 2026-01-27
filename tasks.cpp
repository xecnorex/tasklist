#include <iostream>
#include <vector>
#include <string>

int main () {
  std::vector<std::string> tasks;
  std::string task;
  int choice;
  int tasknumber;

  std::cout << "Welcome to Task List Tool!" << "\n\n";

  std::cout << "Menu Options:" << "\n";
  std::cout << "1. Add Task" << "\n";
  std::cout << "2. View Tasks" << "\n";
  std::cout << "3. Remove Task" << "\n";
  std::cout << "4. Quit" << "\n\n";

  std::cout << "Tasks list system initialized and ready :D" << "\n";

  while (true) {
    std::cout << "Choose an options: ";
    std::cin >> choice;
    std::cin.ignore();

    if (choice == 1) {
      std::getline(std::cin, task);
      tasks.push_back(task);

      std::cout << "Task \"" << task << "\" added successfully :3" << "\n";
      std::cout << "Total tasks: " << tasks.size() << "\n";
    }
    else if (choice  == 2) {
      if (tasks.empty()) {
        std::cout << "No tasls available" << "\n";
      }
      else {
        std::cout << "Your Tasks:" << "\n";
        for (int i = 0; i < tasks.size(); i++) {
          std::cout << i + 1 << ". " << tasks[i] << "\n";
        }
        std::cout << "Total tasks: " << tasks.size() << "\n";
      }
    }
    else if (choice == 3) {
      std::cin >> tasknumber;
      std::cin.ignore();

      if (tasknumber <= 0 || tasknumber > tasks.size()) {
        std::cout << "Error: Invalid tasks number. Please enter a number between 1 and " << tasks.size() << "." << "\n";
      }
      else {
        int index = tasknumber - 1;
        std::string removedtask = tasks[index];

        tasks.erase(tasks.begin() + index);

        std::cout << "Tasks \"" << removedtask << "\" removed successfully :o" << "\n";

        if (tasks.empty()) {
          std::cout << "No tasks remaining" << "\n";
          std::cout << "Total tasks: " << tasks.size() << "\n";
        }
        else {
          std::cout << "Remaining Tasks:" << "\n";
          for (int i = 0; i < tasks.size(); i++) {
            std::cout << i + 1 << ". " << tasks[i] << "\n";
          }
          std::cout << "Total tasks: " << tasks.size() << "\n";
        }
      }
    }
    else if (choice == 4) {
      std::cout << "Thank you brader for using this program" << "\n";
      break;
    }
    else {
      std::cout << "Invalid choice. Please try again" << "\n";
    }
  }

  return 0;
}
