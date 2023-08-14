# FastAPIFactorial

FastAPIFactorial is a simple and efficient web application built with FastAPI. It provides an API endpoint to calculate the factorial of a given integer. The computation of the factorial is implemented in C++. The FastAPI code calls such an implementation.

## Why Call C++ Code from other Programming languages 
C++ is known for its high performance and efficiency, making it a preferred choice for computational tasks. However, integrating C++ code with other platforms and languages can be challenging. This is where tools like SWIG, Pistache, and third-party API frameworks come into play.

#### Using a third-party RESTful framework (i.e. FastAPI, Django)
- **Modern Web Framework**: FastAPI or Django provide a Pythonic way to call C++ code, offering modern features like type checking and automatic documentation.
- **Performance with Ease**: Combines the performance advantages of C++ with the ease and flexibility of Python, providing an efficient yet developer-friendly approach.
- **Rapid Development**: Enables quick prototyping and development, leveraging C++ for computational tasks while using Python for web handling.

- **FastAPIFactorial**: A FastAPI implementation that provides an endpoint to calculate the factorial of a given number. The project can be found [here](https://github.com/gtoscano/FastAPIFactorial).

- **DjangoFactorial**: A Django implementation using the Django REST Framework to provide a similar factorial calculation endpoint. The project can be found [here](https://github.com/gtoscano/DjangoFactorial).

- For **RESTful client codes**: Implementation of RESTful clients in several programming languages can be din [here][https://github.com/gtoscano/RestFactorialClients). Such a project has examples in c++, c#, golang, java, julia, octave, python, R, and rust.

#### Using Pistache for RESTful API
- **Web Accessibility**: By wrapping C++ code in a RESTful API, Pistache allows the functionality to be accessed over the web, expanding its reach to web and mobile applications.
- **Language Independence**: Any platform that understands HTTP can interact with the C++ code, making it more versatile and widely usable.
- **Integration with Existing Systems**: Easily fits into web-based ecosystems, enabling C++ code to be part of modern web architectures.
- For RESTful client codes, please check: https://github.com/gtoscano/RestFactorialClients (it has examples in c++, c#, golang, java, julia, octave, python, R, and rust)


#### Using SWIG
- **Cross-Language Compatibility**: SWIG allows you to call C++ code from various programming languages, providing a seamless bridge between C++ and languages like Python, Java, and more.
- **Consistent Interfaces**: By generating uniform interfaces, SWIG ensures that the C++ functionality behaves consistently across different languages.
- **Development Efficiency**: Reduces the need to write redundant code for each language, saving time and effort.
- For a SWIG example, please check: https://github.com/gtoscano/SwigFactorial 



## Installation

1. **Clone the Repository**: Clone the project to your local machine.
```bash
git clone git@github.com:gtoscano/FastAPIFactorial.git
```

2. **Install FastAPI and Uvicorn**: Run the following commands to install the necessary packages:

   ```bash
   pip install fastapi uvicorn
   ```

## Running the Application

1. **Navigate to the Project Directory**: Use your terminal to navigate to the directory containing `main.py`.
```bash
cd FastAPIFactorial

```

2. **Run the Application**: Start the FastAPI application using Uvicorn:

   ```bash
   uvicorn main:app --reload
   ```

   The `--reload` flag allows you to make changes to the code without having to restart the server.

## Usage

### Calculate Factorial

To calculate the factorial of a number, navigate to the following URL in your browser:

```
http://127.0.0.1:8000/factorial/{number}
```

Replace `{number}` with the integer for which you want to calculate the factorial.



### API Documentation

You can access the automatically generated API documentation by navigating to:

```
http://127.0.0.1:8000/docs
```

## Contributing

Feel free to fork the project and submit pull requests for any enhancements or bug fixes. Make sure to follow the existing code style.

## License

This project is licensed under the Apache License. See the [LICENSE](LICENSE) file for details.
