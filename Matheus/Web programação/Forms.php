<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=, initial-scale=1.0">
    <style>
        body {font-family: Arial, Helvetica, sans-serif;}
    </style>
    <title>Formulario de inscrição:</title>
</head>
<body>
    <form>
        <h1><strong>Formulario de inscrição:</strong></h1>

<p>Nome:<input type="text" name= "Nome" /></p>
<p>CPF:<input type="text" name= "CPF" /></p>
<p>Email:<input type="text" name= "Email" /></p>

<p><strong>Escolha a sua cidade natal:</strong><br></p>

<select>
    <option value="João Pessoa">João Pessoa </option>
    <option value="Natal">Natal </option>
    <option value="Pernanbuco">Pernanbuco</option>
</select>

<p><strong>Escola o seu curso:<br></strong></p>

<p><input type="radio" name="videogame" checked="cheked" /> Python </p>
<p><input type="radio" name="videogame" checked="cheked" /> JavaScript </p>
<p><input type="radio" name="videogame" checked="cheked" /> IOS </p>
<p><input type="radio" name="videogame" checked="cheked" /> Android </p>

<p><strong>Escolha a opção referente a sua idade:<br></strong></p>

<p><input type="radio" name="videogame" checked="cheked" /> 18-25 </p>
<p><input type="radio" name="videogame" checked="cheked" /> 25-35 </p>
<p><input type="radio" name="videogame" checked="cheked" /> 35-45 </p>
<p><input type="radio" name="videogame" checked="cheked" /> 50 adiante </p>

<input type="submit" value="Enviar" />
<input type="submit" value="Limpar" />

    </form>
   
</html>