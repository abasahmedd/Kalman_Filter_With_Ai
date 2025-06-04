# Kalman_Filter_With_Ai
In the Repo We discuss about work offers a new Kalman Filter design using artificial intelligence to increase estimation accuracy in noisy environments
# AI-Driven Signal Filtering for Enhanced Kalman Filter Performance

This repository contains the source materials and results for the research paper:

**"AI-Driven Signal Filtering for Enhanced Kalman Filter Performance in High-Noise Environments"**



## 🧠 Abstract
This study explores the integration of artificial intelligence models with the Extended Kalman Filter (EKF) to improve signal estimation in high-noise environments such as UAV applications using IMU data. Multiple AI models (ANN, LSTM, GRU, BiLSTM, Fuzzy Logic) were tested to adaptively tune the Kalman filter, significantly reducing estimation error.

## 🎯 Objectives
- Apply EKF on real IMU data
- Combine EKF with AI models (ANN, GRU, LSTM, etc.)
- Compare estimation accuracy using RMSE & MSE
- Evaluate computational complexity and real-time feasibility

## ⚙️ Methodology
1. Collect real IMU data (accelerometer & gyroscope)
2. Apply EKF and enhanced versions using:
   - Artificial Neural Networks (ANN)
   - Recurrent Neural Networks (RNN, LSTM, GRU)
   - Fuzzy Logic
3. Compare models using RMSE, MSE, and processing time

## 📊 Results

| Model       | RMSE (deg) | MSE (deg²) | Improvement (%) |
|-------------|-------------|--------------|------------------|
| EKF         | 406.58      | 165309.96    | Baseline         |
| GRU_EKF     | 9.2         | 84.59        | 98.9%            |
| FUZZY_EKF   | 15.44       | 238.27       | 98.1%            |
| LSTM_EKF    | 20.48       | 419.56       | 97.5%            |
| BiLSTM_EKF  | 66.62       | 4438.6       | 92.0%            |
| ANN_EKF     | 61.43       | 3773.77      | 92.6%            |

## 📁 Contents
- `paper/AbbasOGAl.docx` – Full research paper
- `src/` – MATLAB and Python code for EKF and AI models *(coming soon)*
- `data/` – Sample IMU dataset *(if shareable)*

