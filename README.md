# FastAPIFactorial

FastAPIFactorial is a simple and efficient web application built with FastAPI. It provides an API endpoint to calculate the factorial of a given integer.

## Installation

1. **Clone the Repository**: Clone the project to your local machine.

2. **Install FastAPI and Uvicorn**: Run the following commands to install the necessary packages:

   ```bash
   pip install fastapi uvicorn
   ```

## Running the Application

1. **Navigate to the Project Directory**: Use your terminal to navigate to the directory containing `main.py`.

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
