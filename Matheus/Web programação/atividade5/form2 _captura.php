<?php 

    $nome = $_POST["nome"];
    $email = $_POST["email"];
    $end = $_POST["end"];
    $cidade = $_POST["cidade"];
    $ddd = $_POST["ddd"];
    $tel = $_POST["tel"];
    $login = $_POST["login"];
    $passwd  = $_POST["passwd"];
    
?>

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
    <p><b>DADOS preenchidos</b></p>

    <form >
        <label for="">Nome:</label>
        <input type="text" name="nome" value="<?php echo $nome ?>"> 
            <br>
            <br>
        <label for="">Email:</label>
        <input type="email" name="email" value="<?php echo $email ?>">
            <br>
            <br>
        <label for="">Endereço:</label>
        <input type="text" name="end" value="<?php echo $end ?>">
            <br>
            <br>
        <label for="">Cidade</label>
        <input type="text" name="cidade" value="<?php echo $cidade ?>">
            <br>
            <br>
        <label for="">Telefone:</label>
        <input type="ddd" name="ddd" value="<?php echo $ddd ?>">
        <input type="tel" name="tel" value="<?php echo $tel ?>">
            <br>
            <br>
        <label for="">Usuário:</label>
        <input type="text" placeholder="Entre com o seu login" name="login" value="<?php echo $login ?>">
            <br>
            <br>
        <label for="">Senha:</label>
        <input type="password" name="passwd" value="<?php echo $passwd ?>">
            <br>
            <br>
        
    </form>

</body>
</html>