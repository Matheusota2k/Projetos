<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <title>Formulário 2</title>
    <style>
        #teste{
            width: 25px;
        }
    </style>
</head>
<body>
    <h1>Fomulário de inscrição</h1>
    <p><b>Preencha seus dados</b></p>

    <form action="form2 _captura.php" method="POST">
        <label for="">Nome:</label>
        <input type="text" name="nome"> 
            <br>
            <br>
        <label for="">Email:</label>
        <input type="email" name="email">
            <br>
            <br>
        <label for="">Endereço:</label>
        <input type="text" name="end">
            <br>
            <br>
        <label for="">Cidade</label>
        <input type="text" name="cidade">
            <br>
            <br>
        <label for="">Telefone:</label>
        <input type="ddd" name="ddd">
        <input type="tel" name="tel">
            <br>
            <br>
        <label for="">Usuário:</label>
        <input type="text" placeholder="Entre com o seu login" name="login">
            <br>
            <br>
        <label for="">Senha:</label>
        <input type="password" name="passwd">
            <br>
            <br>
        <input type="submit" value="Finalizar minha inscrição">
    </form>

</body>
</html>