<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <title>Formulário 1</title>
</head>
<body>
    <form action="form1_captura.php" method="POST">
       <label for="nome">Nome:</label>
        <input type="text" name="nome">
            <br>
            <br>
        <label for="Cpf">Cpf:</label>
        <input type="text" name="cpf">
            <br>
            <br>
        <label for="Email">Email:</label>
        <input type="email" name="email">
            <br>
            <br>
        <label for="citys"><b>Selecione uma cidade:</b></label>
            <br>
        <select name="cidade">
            <option value="JP"> João Pessoa</option>
            <option value="Cabedelo"> Cabedelo</option>
        </select>
            <br>
            <br>
        <label for="Cursos"><b>Selecione os cursos:</b> </label><br>
            <input type="checkbox" name="android" value="android" >Android <br>
            <input type="checkbox" name="python"  value="python">Python <br>
            <input type="checkbox" name="html_css" value="html_css" >HTML/CSS <br>
            <input type="checkbox" name="js"  value="js" >Javascript<br>
            <br>
        <label for="idade">Selecione a Faixa Etária de Idade</label><br>
            <input type="radio" name="faixa" value="18 - 25" > 18 à 25 <br>
            <input type="radio" name="faixa" value="26 - 30" > 26 à 30 <br>
            <input type="radio" name="faixa" value="31 - 45" > 31 à 45 <br>
            <input type="radio" name="faixa" value="45 - 61" > 45 à 61 <br>
            <br>
        <input type="submit" value="Enviar">
        <input type="submit" value="Limpar">
    </form>
    
</body>
</html>