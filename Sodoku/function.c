int SetField(int xCoordinate, int yCoordinate, int Array[9][9],int Number)
{
    Array[xCoordinate][yCoordinate] = Number;
}

int GetField(int xCoordinate, int yCoordinate, int Array[9][9])
{
    return Array[xCoordinate][yCoordinate];
}
