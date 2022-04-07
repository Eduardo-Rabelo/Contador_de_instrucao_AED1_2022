# Contador_de_instrucao_AED1_2022

<p> Nesse projeto, o objetivo é percorrer uma matriz aleatória de ordem N, com elementos inteiros entre 0 e 99, de modo a seguir os princípios abaixo: </p>
<ul> 
  <li>Percorrer a matriz a partir do início, somando a cada passo, o próximo maior valor encontrado; </li>
  <li>O próximo valor pode ser o que está na mesma linha e imediatamente à direita, imediatamente à esquerda, bem como, o que está na coluna abaixo do numero corrente;</li>
  <li>Ao chegar na última linha deve-se percorre-la até o fim sem realizar mais migrações para colunas acima.</li>
 
</ul>

<p>Para cumprir o objetivo do projeto, foi criada uma classe Matriz que possui como atributos dois ponteiros inteiros para marcar o início(*inicio) e o final(*final) da matriz,
  um vector de inteiros(v) que é usado para gravar os valores da matriz, um inteiro(total) para gravar o valor total da soma dos valores dos elementos percorridos e um inteiro(ordem) para gravar a ordem da matriz. </p>
  
  <p> A matriz possui um cunstrutor(Matriz(int ordem)) que recebe como parametro um inteiro que representa a ordem da matriz, um método void conta(), que é responsável por percorrer a matriz e calcular o total, e os métodos void setOrdem(int ordem), int getOrdem(), int getTotal(), void imprimeMatriz(),cujos nomes são auto-explicativos.</p>
  
  <p>No construtor, dados aleatórios são armazenados no vector v de modo que este tenha um tamanho igual ao quadrado da ordem , o ponteiro início é apontado para o início desse vetor e o ponteiro final é apontado para o final dele. No método void conta(), são criados ponteiros *p e *p2 que apontam respectivamente para onde os ponteiros *inicio e *final apontam. Esses ponteiros são usados para criar um while(p < p2) que, através de uma série de condicionais, é capaz de percorrer a matriz segindo os princípios do projeto, somar os termos percorridos e substituí-los por -1,após serem somados, para que desse modo o caminho percorrido fique visível ao usuário caso o método void imprimeMatriz() seja usado.</p>
  
  <p>No método void imprimeMatriz(), assim como no método void conta(), são criados ponteiros *p e *p2 que apontam respectivamente para onde os ponteiros *inicio e *final apontam, com o intuito de criar um while(p < p2). Esse while, porém, no método void imprimeMatriz(), é usado para mostrar ao usuário a matriz
  representada pelo vector<int> v.</p>
  
  <p>Na função main, a ordem da matriz é informada pelo usuário, uma Matriz k é criada e os métodos da classe Matriz são chamados de modo a imprimir a mariz não percorrida, percorrer a matriz, imprimir a matriz já percorrida e mostrar o total. </p>
