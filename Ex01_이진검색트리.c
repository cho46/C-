#include "myheader.h"
#define MAX_INF 2000000000
#define MIN_INF -2000000000
typedef struct treeNode
{
    int value; //값
    struct treeNode* left; //왼쪽 자식 노드의 주소
    struct treeNode* right; //오른쪽 자식 노드의 주소
}treeNode;

treeNode* insertTreeNode(treeNode* root, int data);
treeNode* removeTreeNode(treeNode* node, int target);
void inorderTraversal(treeNode* node);
void preorderTraversal(treeNode* node);
void postorderTraversal(treeNode* node);
treeNode* getMaxTreeNode(treeNode* node);
treeNode* getMinTreeNode(treeNode* node);
treeNode* findTreeNode(treeNode* node,int target);
int getTreeNodeCount(treeNode* node);
int getTreeNodeSum(treeNode* node);
int getTreeNodeRangeCount(treeNode* node,int n1,int n2);
int getTreeNodeNrangeSum(treeNode* node, int n1, int n2);
treeNode* findParentNode(treeNode* node, treeNode* parentNode, int target);
int isBst(treeNode* node,int min, int max);
int isFullTree(treeNode* node);
int isCompleteTree(treeNode* node);

int main()
{
    int choice;
    int data;
    int n1, n2;
    treeNode* root = NULL;
    treeNode* findNode = NULL;

    while (1)
    {
        printf("\n\n\t\t*** Binary Search Tree(BST); ***\n\n");
        printf(" 1. 원소 삽입\n");
        printf(" 2. 원소 제거\n");
        printf(" 3. 원소 검색\n");
        printf(" 4. 최댓값 구하기\n");
        printf(" 5. 최솟값 구하기\n");
        printf(" 6. 이진 검색 트리 출력 (중위순회);\n");
        printf(" 7. 트리 노드의 값의 합\n");
        printf(" 8. 트리 노드의 개수\n");
        printf(" 9. 트리의 높이\n");
        printf("10. 부모 노드 찾기\n");
        printf("11. BST인가요?\n");
        printf("12. 최소 공통 조상(LCA, Lowest Common Ancestor);찾기\n");
        printf("13. Full Binary Tree인가요?\n");
        printf("14. Complete Binary Tree인가요? \n");
        printf("15. 범위 내 노드 개수 구하기\n");
        printf("16. 범위를 벗어난 노드의 합계 구하기\n");
        printf("17. 범위를 벗어난 노드 제거\n");
        printf(" 0. 프로그램 종료\n");

        printf("\n\n메뉴 선택: ");
        scanf("%d", &choice);
        while (getchar() != '\n');

        switch (choice)
        {
        case 1:
            printf("삽입할 정수 입력: ");
            scanf("%d", &data);
            bufferClear();
            //insertTreeNode함수: 트리노드 생성 후 , 루트와 연결
            root = insertTreeNode(root, data);
            break;
        case 2:
            printf("삭제할 정수 입력: ");
            scanf("%d", &data);
            bufferClear();

            root = removeTreeNode(root, data);
            break;
        case 3:
            printf("검색할 정수 입력: ");
            scanf("%d", &data);
            bufferClear();

            //findTreeNode함수: 검색한 노드의 주소를 리턴, 검색한 노드가 없는 경우는 NULL을 리턴
            findNode = findTreeNode(root, data);
            if (findNode == NULL)
                printf("\n\n\t\t검색한 노드는 존재하지 않습니다.");
            else
                printf("검색한 노드는 %p번지에 저장되어있습니다.", findNode);
            break;
        case 4:
            //getMaxTreeNode함수: 최댓값 노드의 주소를 리턴
            findNode = getMaxTreeNode(root);
            if (findNode == NULL)
                printf("\n\n\t\t최댓값 노드는 존재하지 않습니다.");
            else
            printf("최댓값 노드는 %d입니다.", findNode->value);
            break;
        case 5:
            findNode = getMinTreeNode(root);
            if (findNode == NULL)
                printf("\n\n\t\t최솟값 노드는 존재하지 않습니다.");
            else
                printf("최솟값 노드는 %d입니다.", findNode->value);
            break;
        case 6:
            printf("\n\n중위순회(오름차순 정렬): ");
            inorderTraversal(root);

            printf("\n\n후위순회(오름차순 정렬): ");
            preorderTraversal(root);

            printf("\n\n전위순회(오름차순 정렬): ");
            postorderTraversal(root);
            break;
        case 7:
            printf("\n\n\t\t트리 노드의 합은 %d입니다.\n", getTreeNodeSum(root));
            break;
        case 8:
            printf("\n\n\t\t트리 노드의 개수는 %d개 입니다.\n", getTreeNodeCount(root));
            break;
        case 9:
            break;
        case 10:
            printf("\n\n부모노드를 찾을 값을 입력하세요: ");
            scanf("%d", &data);

            //findParentNode함수: 부모노드의 주소를 리턴, 검색 실패시 NULL 리턴
            findNode = findParentNode(root, NULL, data);
            if (findNode == NULL)
                printf("\n\n\t\t부모노드는 존재하지 않습니다.\n");
            else
                printf("\n\n\t\t부모노드의 주소는 %p번지, 값은 %d 입니다.\n", findNode,findNode->value);
            break;
        case 11:
            printf("이 트리는 BST인가요? %d\n", isBst(root, MIN_INF,MAX_INF) ? "예": "아니오");
            break;
        case 12:
            break;
        case 13:
            printf("이 트리는 Full Binary Tree인가요? %d\n", isFullTree(root) ? "예" : "아니오");
            break;
        case 14:
            printf("이 트리는 Complete Binary Tree인가요? %d\n", isCompleteTree(root) ? "예" : "아니오");
            break;
        case 15:
            
            printf("범위를 지정하세요(공백구분): ");
            scanf("%d %d", &n1, &n2);
            bufferClear();
            printf("범위내에 있는 노드의개수는 %d개 입니다.\n",getTreeNodeRangeCount(root,n1,n2));
            break;
        case 16:
            printf("범위를 지정하세요(공백구분): ");
            scanf("%d %d", &n1, &n2);
            bufferClear();
            printf("범위밖에 있는 노드의합은 %d 입니다.\n", getTreeNodeNrangeSum(root, n1, n2));
            break;
        case 17:
            break;
        case 0:
            return 0;
        }
        printf("\n\n\t\t");
        system("pause");
    }//end while
    return 0;
}

treeNode* insertTreeNode(treeNode* node, int data)
{
    if (node == NULL)
    {
      node = (treeNode*)malloc(sizeof(treeNode));
      node->value = data;
      node->left = NULL;
      node->right = NULL;
    }
    else if (node->value > data)
       node->left = insertTreeNode(node->left, data); // 왼쪽으로 재귀호출
    else if(node->value < data)
        node->right = insertTreeNode(node->right, data); //오른쪽으로 재귀호출
    return node;
}

treeNode* removeTreeNode(treeNode* node, int target)
{
    if (node == NULL)
        return NULL;
    //타겟부터 검색
    if (node->value == target)
    {
        //삭제진행
        //1. 삭제하려는 노드의 자식 노드가 없는 경우
        if (node->left == NULL & node->right == NULL)
        {
            free(node);
            return NULL;
        }
    
        //2. 삭제하려는 노드의 자식노드가 하나인 경우
        if (node->right == NULL)
        {
            treeNode* temp = node->left;
            free(node);
            return temp;
       }
        //2. 삭제하려는 노드의 자식노드가 하나인 경우
        if (node->left == NULL)
        {
            treeNode* temp = node->right;
            free(node);
            return temp;
        }
        //3. 삭제하려는 노드의 자식 노드가 2개인 경우
        //왼쪽 자식 노드 중 최댓값을 찾아 삭제할 위치로 대입
        treeNode* maxNode = getMaxTreeNode(node->left); // 최댓값을 찾는 함수 호출
        node->value = maxNode->value;
        //왼쪽 자식 노드 중 최댓값을 삭제하러 출발.
        node->left = removeTreeNode(node->left,maxNode->value);
    }
    else if (node->value > target)
    {
        node->left = removeTreeNode(node->left, target);
    }
    else
    {
        node->right = removeTreeNode(node->right, target);
    }
    return node;
}

void inorderTraversal(treeNode* node)
{
    if (node == NULL)
        return;

    inorderTraversal(node->left);
    printf("%d", node->value);
    inorderTraversal(node->right);
}

void preorderTraversal(treeNode* node)
{
    if (node == NULL)
        return;

    printf("%d", node->value);
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

void postorderTraversal(treeNode* node)
{
    if (node == NULL)
        return;

    postorderTraversal(node->left);
    postorderTraversal(node->right);
    printf("%d", node->value);
}

treeNode* getMaxTreeNode(treeNode* node)
{
    //if(node == NULL)
    //    return NULL;
    ////오른쪽 끝 노드가 최댓값이다.
    //if (node->right != NULL)
    //    return getMaxTreeNode(node->right);
    //return node;
    if (node == NULL)
        return NULL;
    while (node->right != NULL)
    {
        node = node->right;
    }
    return node;
}

treeNode* getMinTreeNode(treeNode* node)
{
    //if(node == NULL)
    //    return NULL;
    ////왼쪽 끝 노드가 최댓값이다.
    //if (node->left != NULL)
    //    return getMaxTreeNode(node->left);
    //return node;
    if (node == NULL)
        return NULL;
    while (node->left != NULL)
    {
        node = node->left;
    }
    return node;
}

treeNode* findTreeNode(treeNode* node, int target)
{
    if(node == NULL)
        return NULL;

    if (target == node->value)
        return node;
    else if (target < node->value)
        return findTreeNode(node->left, target);
    else
        return findTreeNode(node->right, target);

}

int getTreeNodeCount(treeNode* node)
{
    
    if (node == NULL)
        return 0;
   /* int leftCount = getTreeNodeCount(node->left);
    int rightCount = getTreeNodeCount(node->right);
    return leftCount+rightCount+1;*/

    return (getTreeNodeCount(node->left)) + (getTreeNodeCount(node->right));
}

int getTreeNodeSum(treeNode* node)
{

    if (node == NULL)
        return 0;
    /* int leftSum = getTreeNodeSum(node->left);
     int rightSum = getTreeNodeSum(node->right);
     return leftSum+rightSum+node->value;*/

    return (getTreeNodeSum(node->left)) + (getTreeNodeSum(node->right) + node->value);
}

int getTreeNodeRangeCount(treeNode* node,int n1,int n2)
{
    if (node == NULL)
        return 0;
    int total = 0;
    int leftCount = getTreeNodeRangeCount(node->left, n1, n2);
    int rightCount = getTreeNodeRangeCount(node->right, n1, n2);
    if (node->value >= n1 && node->value <= n2)
        total++;
    
    return total+ leftCount+ rightCount;
}

int getTreeNodeNrangeSum(treeNode* node, int n1, int n2)
{
    if (node == NULL)
        return 0;
    int total = 0;
    if (node->value < n1 || node->value > n2)
        total += node->value;

    int leftSum = getTreeNodeNrangeSum(node->left, n1, n2);
    int rightSum = getTreeNodeNrangeSum(node->right, n1, n2);
    

    return total + leftSum + rightSum;
}

treeNode* findParentNode(treeNode* node, treeNode* parentNode, int target)
{
    if (node == NULL)
        return NULL;
    if (target == node->value)
    {
        return parentNode;
    }
    else if (node->value > target)
    {
        findParentNode(node->left, node, target);
    }
    else
        findparentNode(node->right, node,target);



    return NULL;
}

int isBst(treeNode* node,int min,int max)
{
    if (node == NULL)
        return 1;
    //BST조건에 맞지 않는다면 0리턴
    if (!(node->value > min && node->value < max))
    {
        return 0;
    }
    
    return isBst(node->left,min,node->value)&& isBst(node->right,node->value,max);
}

int isFullTree(treeNode* node)
{
    if (node == NULL)
        return 1;

    if (node->left == NULL && node->right == NULL)
    {
        return 1;
    }
    if(node->left &&node->right)
        return isFullTree(node->left) && isFullTree(node->right);

    return 0;
}

int isCompleteTreeUtil(treeNode* node, int parentIdx, int nodeCount)
{
    if (node == NULL)
        return 1;

    if (parentIdx >= nodeCount)
        return 0;

    int leftIdx = 2 * parentIdx + 1;
    int rightIdx = 2 * parentIdx + 1;

    return isCompleteTreeUtil(node->left, leftIdx, nodeCount)
        && isCompleteTreeUtil(node->right, rightIdx, nodeCount);
}

int isCompleteTree(treeNode* node)
{
    int nodeCount = getTreeNodeCount(node);

    isCompleteTreeUtil(node, 0, nodeCount);

    return 0;
}
