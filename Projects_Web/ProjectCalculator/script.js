let quantidade = 0
let validador = false
function insert(num){
    if(validador){
        quantidade = document.getElementById('resultado').length
        if(quantidade > 14){

        }else{
            var numero = document.getElementById('resultado').innerHTML
            clean()
            document.getElementById('resultado').innerHTML = numero + num
            quantidade = quantidade + 2
        }
        validador = false
    }else{
        if(quantidade > 14){

        }else{
            var numero = document.getElementById('resultado').innerHTML
            document.getElementById('resultado').innerHTML = numero + num
            quantidade++
        }
    }
}
function clean(){
    document.getElementById('resultado').innerHTML = ""
    quantidade = 0
}
function back(){
    if(quantidade > 0){
        var resultado = document.getElementById('resultado').innerHTML
        document.getElementById('resultado').innerHTML = resultado.substring(0, resultado.length - 1)
        quantidade--
    }else{
        clean()
        quantidade = 0
    }
}
function calcular(){
    var resultado = document.getElementById('resultado').innerHTML
    if(resultado){
        document.getElementById('resultado').innerHTML = eval(resultado)
        validador = true

    }else{
        document.getElementById('resultado').innerHTML = 'Vazio'
    }
}