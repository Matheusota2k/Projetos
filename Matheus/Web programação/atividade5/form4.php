<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <title>Formulário 4</title>
</head>
<body>
    <h1>HTML form</h1>

    <form action="form4_captura.php" method="GET">
        <label for="">First name:</label>
        <input type="text" name="nome">
            <br>
            <br>
        <label for="">Last name:</label>
        <input type="text" name="ultimo_nome">
            <br>
            <br>
        <label for="">Email:</label>
        <input type="email" name="email">
            <br>
            <br>

        <input type="radio" name="sexo" value="m">Male <br>
        <input type="radio" name="sexo" value="f">Female <br>
            <br>

        <input type="submit" value="Submit">
        <input type="submit" value="Reset">
    </form>
    
</body>
</html>