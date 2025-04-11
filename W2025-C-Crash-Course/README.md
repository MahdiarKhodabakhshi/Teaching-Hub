# Final Prep: C Programming Lecture Material

This repository contains comprehensive lecture material and code examples designed to teach various aspects of C programming—from the basics of compiled versus interpreted languages to detailed demonstrations of input/output functions, string manipulation, structures, and file handling. The content is organized within a Jupyter Notebook (`final_prep.ipynb`), which includes code cells demonstrating practical examples as well as explanations to help you understand each concept.

---

## Table of Contents

- [Purpose](#purpose)
- [Repository Structure](#repository-structure)
- [Usage Instructions](#usage-instructions)
  - [Working with the Notebook](#working-with-the-notebook)
  - [Compiling the C Code](#compiling-the-c-code)
  - [Running the Compiled Executables](#running-the-compiled-executables)
- [Additional Information](#additional-information)

---

## Purpose

The primary goal of this repository is to serve as an educational resource for students learning C programming. The material provides:
- Step-by-step explanations of the C compilation process (preprocessing, compilation, and linking).
- Practical examples demonstrating common C functions such as `printf`, `sprintf`, `scanf`, and string handling functions.
- Examples on file input/output, use of structures and unions, and binary file operations.
- Exercises that encourage modifying and compiling code in real-time.

---

## Repository Structure

- **`final_prep.ipynb`**  
  The main Jupyter Notebook containing all lecture material, code examples, and explanations. Each code cell corresponds to a different topic or function demonstration.
  
- **C Source Files**  
  Multiple C source files are provided, each focusing on different aspects of the lecture (e.g., `direct_output_printf.c`, `format_string_sprintf.c`, `scanf_vs_fgets.c`, etc.). These files can be compiled separately as needed.

---

## Usage Instructions

### Working with the Notebook

- Open the `final_prep.ipynb` file in Jupyter Notebook or JupyterLab.
- Review the lecture materials and code examples provided in the notebook.
- Modify the code cells as needed to experiment with the examples or to update them based on class feedback.
- **Important:** Whenever you modify any code in the notebook cells, you must recompile the corresponding C source file to reflect your changes.

### Compiling the C Code

At the end of the notebook, there is a cell that contains a line of code for compiling the C source files. Follow these steps:

1. **Edit the Compilation Command:**  
   Locate the cell with the compilation command and change the file name to the specific C file you want to compile.  
   Example:
   ```bash
   gcc -o my_executable my_source_file.c
   ```
   Replace `my_source_file.c` with the name of the file you wish to compile, and my_executable with your desired output executable name(It's preferably the same as source_file name).


2. **Compile the Code:**  
   Run the cell to execute the compilation command. This will generate an executable in your local repository.

### Running the Compiled Executables

Once you have compiled a C file:

1. **Open a Terminal:**  
   Navigate to the directory/folder containing the compiled executable.


2. **Execute the File:**  
   Run the compiled executable using the command:
   ```bash
   ./<executable_name>
   ```
   For example, if your executable is named `my_executable`, type:
   ```bash
   ./my_executable
   ```
   This command will run the program in your terminal.

---

## Additional Information

### Local Development
Clone this repository to your local machine to modify and test the code examples in a hands-on environment.
You can follow the this instruction:
```bash
git clone https://github.com/MahdiarKhodabakhshi/Teaching-Hub.git
cd Teaching-Hub/W2025-C-Crash-Course
```

### Modifications & Updates
Always ensure to recompile any modified C code to see updated results. This process reinforces the link between code changes and compiled output.

### Learning Path
The examples are structured to gradually build up your understanding. It is recommended to follow the notebook sequentially, experimenting with code modifications as you progress.
