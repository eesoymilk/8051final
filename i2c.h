//****** i2c.h ******//
//**************************************

//**************************************
#define SCL P0_0
#define SDA P0_1

void I2C_Start(void);
void I2C_Stop(void);
void delay_i2c(void);


void I2C_Start(void)
{
    SDA = 0;                    
    delay_i2c();                  
    SCL = 0;                    
    delay_i2c();                  
}
//**************************************

//**************************************
void I2C_Stop(void)
{
    SDA = 0;                    
    delay_i2c();                  
    SCL = 1;                    
    delay_i2c();                  
    SDA = 1;                    
    delay_i2c();                  
}
//**************************************
// ack (0:ACK 1:NAK)
//**************************************
void I2C_SendACK(__bit ack)
{
    SDA = ack;                  
    delay_i2c();                  
    SCL = 1;                    
    delay_i2c();                  
    SCL = 0;                    
    delay_i2c();                  
}
//**************************************

//**************************************
__sbit I2C_RecvACK()
{   
    SCL = 1;                    
    delay_i2c();                  
    CY = SDA;                   
    delay_i2c();                  
    SCL = 0;                    
    delay_i2c();                  
    return CY;
}

//**************************************

//**************************************
void I2C_SendByte(unsigned char dat)
{
    unsigned char i;
    for (i=0; i<8; i++)         
    {
        if(dat & 0x80)
            SDA = 1;               
        else 
            SDA = 0;               
        delay_i2c();                  
        SCL = 1;                
        delay_i2c();                  
        SCL = 0;                
        delay_i2c();                  
        dat <<= 1;              
    }
    I2C_RecvACK();
}
//**************************************

//**************************************
unsigned char I2C_RecvByte()
{
    unsigned char i;
    unsigned char dat = 0;
    SDA = 1;                    
    for (i=0; i<8; i++)         
    {
        dat <<= 1;
        SCL = 1;                
        delay_i2c();                  
        dat |= SDA;             
        delay_i2c();                                
        SCL = 0;                
        delay_i2c();                  
    }
    return dat;
}
//**************************************

//**************************************
void Single_WriteI2C(unsigned char SlaveAddress, unsigned char REG_Address,unsigned char REG_data)
{
    I2C_Start();                  
    I2C_SendByte(SlaveAddress);   
    I2C_SendByte(REG_Address);    
    I2C_SendByte(REG_data);       
    I2C_Stop();                   
}
//**************************************

//**************************************
unsigned char Single_ReadI2C(unsigned char SlaveAddress, unsigned char REG_Address)
{
    char REG_data;
    I2C_Start();                   
    I2C_SendByte(SlaveAddress);    
    I2C_SendByte(REG_Address);       
    I2C_Stop();                    

    I2C_Start();                   
    I2C_SendByte(SlaveAddress|0x01);  
    REG_data=I2C_RecvByte();       
    I2C_SendACK(1);                
    I2C_Stop();                    
    return REG_data;
}
//**************************************

//**************************************
void delay_i2c(void)
{
    char i;
    for(i = 0; i < 5; i ++);    
}
